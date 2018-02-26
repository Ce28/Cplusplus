#include <iostream>

using namespace std;

void main()
{
	int iNum = 0;

	cout << "Ingrese un numero: ";
	cin >> iNum;

	if (iNum < 10)
	{
		cout << "Tiene 1 digito";
	}
	else
	{
		if (iNum < 100)
		{
			cout << "Tiene 2 digitos";
		}
		else
		{
			if (iNum < 1000)
			{
				cout << "Tiene 3 digitos";
			}
			else
			{
				cout << "Error tiene mas de 3 digitos";
			}
		}
	}

	cin.get();
	cin.get();
}