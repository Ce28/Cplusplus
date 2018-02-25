#include<iostream>

using namespace std;

void main()
{
	int iNum1 = 0;
	int iNum2 = 0;
	int iSuma = 0;
	int iProducto = 0;

	cout << "Ingrese primer valor: ";
	cin >> iNum1;
	cout << "Ingrese segundo valor: ";
	cin >> iNum2;
	iSuma = iNum1 + iNum2;
	iProducto = iNum1 * iNum2;
	cout << "La suma de los valores es: ";
	cout << iSuma;
	cout << "\n";
	cout << "El producto de los dos valores es:";
	cout << iProducto;

	cin.get();
	cin.get();
}