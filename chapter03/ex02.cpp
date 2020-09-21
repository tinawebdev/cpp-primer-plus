#include <iostream>

int main()
{
    const int FOOT_IN_INCHES = 12;
    const float INCH_IN_METERS = 0.0254f;
    const float KG_IN_POUNDS = 2.2f;

    int feet, inches, weight;
    std::cout << "Enter your height in feet: ";
    std::cin >> feet;
    std::cout << "Enter your height in inches: ";
    std::cin >> inches;
    std::cout << "Enter your weight in pounds: ";
    std::cin >> weight;

    float heightInMeters = (inches + (feet * FOOT_IN_INCHES)) * INCH_IN_METERS;
    float weightInKg = weight / KG_IN_POUNDS;

    std::cout << "Your height in meters: " << heightInMeters << std::endl;
    std::cout << "Your weight in kilograms: " << weightInKg << std::endl;

    int bmi = static_cast<int>(weightInKg/(heightInMeters*heightInMeters));

    std::cout << "Your BMI: " << bmi << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
