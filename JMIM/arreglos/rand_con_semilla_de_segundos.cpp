#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int seconds, multiplicador, n = 0;
    
    cout << "¿Cuantos numeros quieres ver?: " << endl;
    cin >> n;
    int arreglo[n];
    
    
    
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    seconds = local->tm_sec;
    
    printf("segundo is %02d \n", seconds);
    

    multiplicador = seconds*562;

    for (int i = 0; i < n; i++) {
        //  cout << "Ingrese un numero: ";
        arreglo[i] = rand() % multiplicador;

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