#include <iostream>

using namespace std;

void main()
{
	int iTotalPreguntas = 0;
	int iCorrectas = 0;
	float fPromedio = 0;

	cout << "Ingrese la cantidad total de preguntas: ";
	cin >> iTotalPreguntas;
	cout << "Ingrese la cantidad de respuestas correctas: ";
	cin >> iCorrectas;

	fPromedio = (iCorrectas * 100) / iTotalPreguntas;

	if (fPromedio >= 90)
	{
		cout << "Nivel Maximo";
	}
	else
	{
		if (fPromedio >= 75)
		{
			cout << "Nivel medio";
		}
		else
		{
			if (fPromedio >= 50)
			{
				cout << "Nivel regular";
			}
			else
			{
				cout << "Fuera de nivel";
			}
		}
	}

	cin.get();
	cin.get();
}