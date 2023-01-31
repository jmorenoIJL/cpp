#include <iostream>

using namespace std;

int main()
{
	int nump, numH = 0, numM = 0;
	char genero;
	float altH, pesoH, altM, pesoM, totalaltH{}, totalpesoH{}, totalaltM{}, totalpesoM{}, promedioaltH, promediopesoH, promedioaltM, promediopesoM;
	cout << "Ingresa la cantidad de participantes:\n";
	cin >> nump;
	for (int i = 1; i <= nump; i++)
	{
		cout << "\n\nNUEVO PARTICIPANTE\n";
		cout << "Ingrese su genero (M,m = masculino o F,f = Femenino):\n";
		cin >> genero;
		if (genero == 'm' || genero == 'M')
		{
			cout << "Ingrese su altura:\n";
			cin >> altH;
			totalaltH += altH;
			cout << "\n Ingrese su peso: \n";
			cin >> pesoH;
			totalpesoH += pesoH;
			numH++;
		}
		else if (genero == 'F' || genero == 'f')
		{
			cout << "Ingrese su altura:\n";
			cin >> altM;
			totalaltM += altM;
			cout << "\n Ingrese su peso: \n";
			cin >> pesoM;
			totalpesoM += pesoM;
			numM++;
		}
		else
		{
			cout << "El genero ingresado no es correcto, solo se admiten Mascalino (m y M) y Femenino (f y F).\n";
		}
	}
	promedioaltH = totalaltH / numH;
	promedioaltM = totalaltM / numM;
	promediopesoH = totalpesoH / numH;
	promediopesoM = totalpesoM / numM;
	cout << "\n\nPeso promedio de Hombres igual a : " << promediopesoH << "\n";
	cout << "Altura promedio de Hombres igual a : " << promedioaltH << "\n";
	cout << "Peso promedio de Mujeres igual a : " << promediopesoM << "\n";
	cout << "Altura promedio de Mujeres igual a : " << promedioaltM << "\n";

}
