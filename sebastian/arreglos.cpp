#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "¿Cuantos numeros quieres ver?: " << endl;
    cin >> n;    

    int arreglo[n];
   
    for (int i = 0; i < n; i++) {
        cout << "Ingrese un numero: ";
        cin >> arreglo[i];
    }
    
    cout << "Los numeros que contiene el array son: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << "\n";
    }

    cout << "Los numeros pares que contiene el arreglo son: " << "\n";
    for (int i = 0; i < n; i++) {
        if (arreglo[i] % 2 == 0) cout << arreglo[i] << "\n";
    }

    return 0;

}
