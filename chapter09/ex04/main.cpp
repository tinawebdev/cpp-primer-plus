#include <iostream>
#include "namespace.h"

int main() {
	using namespace SALES;
	Sales s1, s2;
	double ar[4] = {1, 2, 3, 4};
	
	setSales(s1, ar, (sizeof(ar) / sizeof(double)));
	setSales(s2);
	
	std::cout << "Displaying contents of struct s1" << std::endl;
	showSales(s1);
	std::cout << "Displaying contents of struct s2" << std::endl;
	showSales(s2);
	
	return 0;
}
