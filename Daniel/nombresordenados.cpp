#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Definir arreglo
    string nombres[5] = {"Daniel", "Roger", "Alvaro", "Jaret", "Sebas"};

    // Mostrar el arreglo sin ordenar
    cout << "Arreglo sin ordenar:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << nombres[i] << endl;
    }

    // Ordenar el arreglo
    sort(nombres, nombres+5);

    // Mostrar el arreglo ordenado
    cout << "Arreglo ordenado:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << nombres[i] << endl;
    }

    return 0;
}