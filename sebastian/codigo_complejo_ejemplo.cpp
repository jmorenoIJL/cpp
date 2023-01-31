#include <iostream>
using namespace std;

int main()
{
	int n, contadorH = 0, contadorM = 0;
	char genero;
	float alturaH, pesoH, alturaM, pesoM, pesoRecolectadoH = 0, alturaRecolectadaH = 0, pesoRecolectadoM = 0, alturaRecolectadaM = 0,
		pesoPromedioH =0, promedioAlturaH = 0, pesoPromedioM= 0, promedioAlturaM=0;

	cout << "Ingresa el nunero de las personas que desea obtener los datos: " << endl;
	cin >> n;

	
	for (int i = 1; i <= n; i++) {
		cout << "Ingrese el genero de las persona (Femenino (F/f| Masculino (M/m))" << "\n";
		cin >> genero;

		if (genero == 'M' || genero == 'm') {
			cout << "Ingrese el peso de la persona: " << endl;
			cin >> pesoH;
			cout << "\n";
			pesoRecolectadoH += pesoH;

			cout << "Ingrese la altura de la persona: " << endl;
			cin >> alturaH;
			cout << "\n";
			alturaRecolectadaH += alturaH;
			contadorH++;
		}

		else if (genero == 'F' || genero == 'f') {
			cout << "Ingrese el peso de la persona: " << endl;
			cin >> pesoM;
			cout << "\n";
			pesoRecolectadoM += pesoM;

			cout << "Ingrese la altura de la persona: " << endl;
			cin >> alturaM;
			cout << "\n";
			alturaRecolectadaM += pesoM;
			contadorM++;
		}

		else {
			cout << "El genero ingresado no es correcto, solo se admiten Masculino (M | m) y Femenino (F | f)" << "\n";
		}
	}

	pesoPromedioH = pesoRecolectadoH / contadorH;
	pesoPromedioM = pesoRecolectadoM / contadorM;
	promedioAlturaH = alturaRecolectadaH / contadorH;
	promedioAlturaM = alturaRecolectadaM / contadorM;

	cout << "El peso promedio de los hombres es: " << pesoPromedioH << endl;
	cout << "El peso promedio de las mujeres es: " << pesoPromedioM << endl;
	cout << "La altura promedio de los hombres es: " << promedioAlturaH << endl;
	cout << "La altura promedio de las mujeres es: " << promedioAlturaM << endl;

}
