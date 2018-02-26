#include <iostream>

using namespace std;

void main()
{
	float fNota1 = 0;
	float fNota2 = 0;
	float fNota3 = 0;
	float fPromedio = 0;

	cout << "Ingrese la nota 1: ";
	cin >> fNota1;
	cout << "Ingrese la nota 2: ";
	cin >> fNota2;
	cout << "Ingrese la nota 3: ";
	cin >> fNota3;

	fPromedio = (fNota1 + fNota2 + fNota3) / 3;

	if (fPromedio >= 7)
	{
		cout << "Promocionado";
	}

	cin.get();
	cin.get();
}