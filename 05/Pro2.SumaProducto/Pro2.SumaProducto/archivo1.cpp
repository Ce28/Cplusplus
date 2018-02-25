#include <iostream>

using namespace std;

void main()
{
	int iNum1 = 0;
	int iNum2 = 0;
	int iNum3 = 0;
	int iNum4 = 0;
	int iSuma = 0;
	int iProducto = 0;

	cout << "Ingrese el 1° número: ";
	cin >> iNum1;
	cout << "Ingrese el 2° número: ";
	cin >> iNum2;
	cout << "Ingrese el 3° número: ";
	cin >> iNum3;
	cout << "Ingrese el 4° número: ";
	cin >> iNum4;

	iSuma = iNum1 + iNum2;
	iProducto = iNum3 * iNum4;

	cout << "La suma del 1° y del 2° es: ";
	cout << iSuma;
	cout << "\n";
	cout << "El producto del 3° y del 4° es: ";
	cout << iProducto;

	cin.get();
	cin.get();
}