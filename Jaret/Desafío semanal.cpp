#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void regNombres(string nombres[], int Cantidad) {
    cout << "Escriba los " << Cantidad << " nombres: \n";
    for (int i = 0; i < Cantidad; i++) {
        cin >> nombres[i];
    }
}

void mostNombres(string nombres[], int Cantidad, string orden) {
    if (orden == "no") cout << "Lista desordenada:\n" ;
    else if (orden == "si") cout << "Lista ordenada:\n" ;
    for (int i = 0; i < Cantidad; i++) {
        cout << nombres[i] << "\n";
    }
} 

int main()
{
    int Cantidad = 5;
    string nombres[5];
    regNombres(nombres, Cantidad);
    mostNombres(nombres, Cantidad, "no");
    sort(nombres, nombres + Cantidad);
    cout << "\n-----------\n";
    mostNombres(nombres, Cantidad, "si");
    return 0;
}