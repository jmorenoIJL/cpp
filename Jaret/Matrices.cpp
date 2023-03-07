#include <iostream>
#include <cstdlib>
#include <ctime>

#define FILAS 2
#define COLUMNAS 3
#define MAX_VALOR 10

using namespace std;

void llenarMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas);
void mostrarMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas);
int sumarElementosMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas);

void mostrarSumaColumnas(int matriz[FILAS][COLUMNAS], int filas, int columnas);


int main() {
	srand(time(NULL));

	// Se declara la matriz
	int matriz[FILAS][COLUMNAS];
	int suma = 0;
	int sumaPares = 0;
	int sumaImpares = 0;
	int sumaDiagonalPrincipal = 0;

	// a) Almacene números aleatorios (menores que 100) en una matriz de 5 * 6. 
	llenarMatriz(matriz, FILAS, COLUMNAS);

	// b) Recorra la matriz: mostrando sus elementos
	mostrarMatriz(matriz, FILAS, COLUMNAS);

	// c) Imprima la suma de los números almacenados en la matriz
	suma = sumarElementosMatriz(matriz, FILAS, COLUMNAS);
	cout << "\nLa suma de los elementos de la matriz es: " << suma << endl;

	// f) Imprima la suma de cada columnas
	mostrarSumaColumnas(matriz, FILAS, COLUMNAS);


}

void llenarMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas) {
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			matriz[i][j] = rand() % (MAX_VALOR + 1); // números aleatorios menores o iguales a MAX_VALOR
		}
	}
}

void mostrarMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas) {
	cout << "La matriz es: " << endl;
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			cout << "\t" << matriz[i][j];
		}
		cout << endl;
	}
}

int sumarElementosMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas) {
	int suma = 0;
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			suma += matriz[i][j];
		}
	}

	return suma;
}



void mostrarSumaColumnas(int matriz[FILAS][COLUMNAS], int filas, int columnas) {
	int suma = 0;
	cout << "\n";
	for (int j = 2; j < 3; ++j) {
		suma = 0;
		for (int i = 0; i < filas; ++i) {
			suma += matriz[i][j];
		}
		cout << "La suma de la columna " << j << " es: " << suma << endl;
	}
}
