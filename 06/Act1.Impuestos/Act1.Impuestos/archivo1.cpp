#include <iostream>

using namespace std;

void main()
{
	float fSueldo = 0;
	cout << "Ingrese el sueldo: ";
	cin >> fSueldo;
	if (fSueldo > 3000)
	{
		cout << "Esta persona debe abonar impuestos.";
	}

	cin.get();
	cin.get();
}