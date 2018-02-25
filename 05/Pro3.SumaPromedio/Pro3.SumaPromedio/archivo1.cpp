#include <iostream>

using namespace std;

void main()
{
	int iNum1 = 0;
	int iNum2 = 0;
	int iNum3 = 0;
	int iNum4 = 0;
	int iSuma = 0;
	float fPromedio = 0;

	cout << "Ingrese el 1 numero: ";
	cin >> iNum1;
	cout << "Ingrese el 2 numero: ";
	cin >> iNum2;
	cout << "Ingrese el 3 numero: ";
	cin >> iNum3;
	cout << "Ingrese el 4 numero: ";
	cin >> iNum4;

	iSuma = iNum1 + iNum2 + iNum3 + iNum4;
	fPromedio = iSuma / 4;

	cout << "La suma es: ";
	cout << iSuma;
	cout << "\n";
	cout << "El promedio es: ";
	cout << fPromedio;

	cin.get();
	cin.get();
}