#include <iostream>

using namespace std;

void main()
{
	int iNota1 = 0;
	int iNota2 = 0;
	int iNota3 = 0;
	int iPromedio = 0;

	cout << "Ingrese la nota 1: ";
	cin >> iNota1;
	cout << "Ingrese la nota 2: ";
	cin >> iNota2;
	cout << "Ingrese la nota 3: ";
	cin >> iNota3;

	iPromedio = (iNota1 + iNota2 + iNota3) / 3;

	if (iPromedio >= 7)
	{
		cout << "Promocionado";
	}
	else
	{
		if (iPromedio >= 4)
		{
			cout << "Regular";
		}
		else
		{
			cout << "Reprobado";
		}
	}

	cin.get();
	cin.get();
}