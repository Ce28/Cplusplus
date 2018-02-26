#include <iostream>

using namespace std;

void main()
{
	int iNum1 = 0;

	cout << "Ingrese un numero de 1 o 2 digitos: ";
	cin >> iNum1;

	if (iNum1 < 10)
	{
		cout << "Tiene 1 digito";
	}
	else if (iNum1 < 100)
	{
		cout << "Tiene 2 digitos";
	}
	else
	{
		cout << "Tiene mas de 2 digitos";
	}

	cin.get();
	cin.get();
}