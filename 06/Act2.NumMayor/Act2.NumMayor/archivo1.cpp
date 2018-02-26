#include <iostream>

using namespace std;

void main()
{
	int iNum1 = 0;
	int iNum2 = 0;

	cout << "Ingrese el primer valor: ";
	cin >> iNum1;
	cout << "Ingrese el segundo valor: ";
	cin >> iNum2;

	if (iNum1 > iNum2)
	{
		cout << iNum1;
	}
	else
	{
		cout << iNum2;
	}

	cin.get();
	cin.get();
}
/*
	Operadores relacionales.
	>	Mayor
	<	Menor
	>=	Mayor o igual
	<=	Menor o igual
	==	Igual
	!=	Distinto

	Operadores matematicos.
	+	Mas
	-	Menos
	*	Producto
	/	Division
	%	Resto de una division
*/