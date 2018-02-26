#include <iostream>

using namespace std;

void main()
{
	int iNum1 = 0;
	int iNum2 = 0;

	cout << "Ingrese el primer numero: ";
	cin >> iNum1;
	cout << "Ingrese el segundo numero: ";
	cin >> iNum2;

	if (iNum1 > iNum2)
	{
		int iSuma = iNum1 + iNum2;
		int iDiferencia = iNum1 - iNum2;
		cout << "La suma es: ";
		cout << iSuma;
		cout << "\n";
		cout << "La diferencia es: ";
		cout << iDiferencia;
	}
	else
	{
		int iProducto = iNum1 * iNum2;
		float fDivision = iNum1 / iNum2;
		cout << "El producto es: ";
		cout << iProducto;
		cout << "\n";
		cout << "La division es: ";
		cout << fDivision;
	}

	cin.get();
	cin.get();
}