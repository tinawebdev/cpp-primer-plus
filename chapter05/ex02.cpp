#include <iostream>
#include <array>

int main()
{
	using namespace std;
	array<long double, 101> factorials;
	factorials[1] = factorials[0] = 1;

	for (int i = 2; i < factorials.size(); i++)
		factorials[i] = i * factorials[i - 1];

	for (int i = 0; i < factorials.size(); i++)
		cout << i << "! = " << factorials[i] << endl;

	return 0;
}