#include <iostream>
#include <time.h>
using namespace std;


int main()
{
    srand(time(0));
    int n = 0;
    cout << "¿Cuantos numeros quieres ver?: " << endl;
    cin >> n;
    int arreglo[n];


    for (int i = 0; i < n; i++) {
        //  cout << "Ingrese un numero: ";
        arreglo[i] = rand() % 100;

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