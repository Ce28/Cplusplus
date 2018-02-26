#include <iostream>

using namespace std;

void main()
{
	int iNum1 = 0;
	int iNum2 = 0;
	int iNum3 = 0;

	cout << "Ingrese el numero 1: ";
	cin >> iNum1;
	cout << "Ingrese el numero 2: ";
	cin >> iNum2;
	cout << "Ingrese el numero 3: ";
	cin >> iNum3;

	if (iNum1 > iNum2 && iNum1 > iNum3)
	{
		cout << iNum1;
	}
	else
	{
		if (iNum2 > iNum3)
		{
			cout << iNum2;
		}
		else
		{
			cout << iNum3;
		}
	}

	cin.get();
	cin.get();
}