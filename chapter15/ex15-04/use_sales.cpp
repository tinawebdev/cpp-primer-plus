#include <iostream>
#include <typeinfo>
#include "sales.h"

int main()
{
    double vals1[12] = {
      1220, 1100, 1122, 2212, 1232, 2334,
      2884, 2393, 3302, 2922, 3002, 3544
    };

    double vals2[12] = {
      12, 11, 22, 21, 32, 34,
      28, 29, 33, 28, 32, 35
    };

    Sales sales1(2011, vals1, 12);
    LabeledSales sales2("Blogstar", 2012, vals2, 12);

    std::cout << "First try block:\n";
    try
    {
        int i;

        std::cout << "Year = " << sales1.Year() << std::endl;
        for (i = 0; i < 12; ++i)
        {
            std::cout << sales1[i] << ' ';
            if (i % 6 == 5)
                std::cout << std::endl;
        }

        std::cout << "Year = " << sales2.Year() << std::endl;
        std::cout << "Label = " << sales2.Label() << std::endl;
        for (i = 0; i <= 12; ++i)
        {
            std::cout << sales2[i] << ' ';
            if (i % 6 == 5)
                std::cout << std::endl;
        }

        std::cout << "End of try block 1.\n";
    }

    catch (Sales::bad_index& bad)
    {

        std::cout << bad.what();
        if (typeid(bad) == typeid(LabeledSales::nbad_index))
            std::cout << "Company: " << dynamic_cast<LabeledSales::nbad_index&>(bad).label_val() << std::endl;
        std::cout << "bad index: " << bad.bi_val() << std::endl;
    }


    std::cout << "\nNext try block:\n";

    try
    {
        sales2[2] = 37.5;
        sales1[20] = 23345;
        std::cout << "End of try block 2.\n";
    }

    catch (Sales::bad_index& bad)
    {
        std::cout << bad.what();
        if (typeid(bad) == typeid(LabeledSales::nbad_index))
            std::cout << "Company: " << dynamic_cast<LabeledSales::nbad_index&>(bad).label_val() << std::endl;
        std::cout << "bad index: " << bad.bi_val() << std::endl;
    }

    std::cout << "\ndone\n";
    return 0;
}
