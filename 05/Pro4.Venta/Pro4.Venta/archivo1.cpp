#include <iostream>

using namespace std;

void main()
{
	float fPrecio = 0;
	int iCantidad = 0;
	float fTotal = 0;

	cout << "El precio del producto es: ";
	cin >> fPrecio;
	cout << "La cantidad de productos: ";
	cin >> iCantidad;

	fTotal = fPrecio * iCantidad;

	cout << "El total es: ";
	cout << fTotal;

	cin.get();
	cin.get();
}