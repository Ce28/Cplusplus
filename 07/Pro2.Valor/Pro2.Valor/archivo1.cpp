#include <iostream>

using namespace std;

void main()
{
	int iNum = 0;

	cout << "Ingrese un numero: ";
	cin >> iNum;

	if (iNum > 0)
	{
		cout << "Positivo";
	}
	else
	{
		if (iNum < 0)
		{
			cout << "Negativo";
		}
		else
		{
			cout << "Nulo";
		}
	}

	cin.get();
	cin.get();
}