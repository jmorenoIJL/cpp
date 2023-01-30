#include <iostream>

using namespace std;

int main()
{
    int cantidad = 0;
    int numeros[100];
    while (cantidad > 100 || cantidad <= 0) {
        cout << "Ingrese la cantidad de numeros que quiere poner:\n";
        cin >> cantidad;
    }
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese el numero:\n";
        cin >> numeros[i];
    }
    cout << "estos son los numeros seleccionados:\n";
    for (int i = 0; i < cantidad; i++)
    {
        cout << numeros[i];
        cout << "\n";
    }
    cout << "los numeros pares son:\n";
    for (int i = 0; i < cantidad; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            cout << numeros[i] << "\n";
        }
    }
    return 0;
}