#include <iostream>
using namespace std;

void llenar(int arr[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << "Ingrese el " << i + 1 << " numero: ";
		cin >> arr[i];
	}
}

int promedio(int arr[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i ++) {
        suma += arr[i];
    }
    
    return suma / tam;
}

int main() {
    int tam;
    cout << "Ingrese los números que tendra el array, en caso de poner cero se pondra el valor de default a 5: ";
    cin >> tam;

    // aunque el problema decia que solo 5 números, hize que sea los números que quiera el usuario
    // si pone 0 automaticamente se convierte en 5
    
    if (tam == 0) tam = 5;
    int arr[tam];
    llenar(arr, tam);
    cout << "El promeio de los números ingresados es: " << promedio(arr, tam) << endl;
    
    return 0;
}

