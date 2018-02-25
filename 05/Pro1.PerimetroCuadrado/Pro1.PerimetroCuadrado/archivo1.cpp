#include <iostream>

using namespace std;

void main()
{
	int iLado = 0;
	int iPerimetro = 0;
	cout << "Ingrese el lado del cuadrado: ";
	cin >> iLado;
	iPerimetro = iLado * 4;
	cout << "El perimetro del cuadrado es: ";
	cout << iPerimetro;

	cin.get();
	cin.get();
}