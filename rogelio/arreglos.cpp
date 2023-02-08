#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int CantidadDeNumeros;
	cout << "Introduzca la cantidad de numeros a intruducir (tiene que ser menor a 10 y mayor que 0)" << endl;
	cin >> CantidadDeNumeros;
	int vector[11];

	for (int i = 1; i <= CantidadDeNumeros; i++) {
		vector[i] = { rand() % 10 };
	}
	cout << "Los valores del vector son: " << endl;
	for (int j = 1; j <= CantidadDeNumeros; j++) {
		cout << vector[j] << endl;
	}
	//pares 
	int DivisionPar;
	cout << "Los numeros pares son: " << endl;
	for (int r = 1; r <= CantidadDeNumeros; r++) {
		DivisionPar = vector[r] % 2;
		if (DivisionPar == 0) {
			cout << vector[r] << endl;
		}

	}
	return 0;
}