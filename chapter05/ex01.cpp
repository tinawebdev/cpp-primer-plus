#include <iostream>

int main()
{
	int val1, val2, result = 0;

	std::cout << "Enter 2 integers. Enter the smaller first: ";
	std::cin >> val1;
	std::cout << "Enter the second number: ";
	std::cin >> val2;

	for (int i = val1; i <= val2; i++)
	{
		result += i;
	}

	std::cout << std::endl;
	std::cout << "Result: " << result << std::endl;

	return 0;
}