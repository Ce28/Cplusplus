#include <iostream>

using namespace std;

void main()
{
	int iHorasTrabajadas = 0;
	float fCostoHora = 0;
	float fSueldo = 0;

	cout << "Ingrese Horas trabajadas por el operario: ";
	cin >> iHorasTrabajadas;
	cout << iHorasTrabajadas;
	cout << "Ingrese el pago por hora: ";
	cin >> fCostoHora;
	cout << fCostoHora;
	fSueldo = iHorasTrabajadas * fCostoHora;
	cout << "El sueldo total del operario es: ";
	cout << fSueldo;

	cin.get();
	cin.get();
}