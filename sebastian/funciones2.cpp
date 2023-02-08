
#include <iostream>
#include <string>

using namespace std;

void rellenarNombre(string arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese el nombre del " << i + 1 << " participante: ";
        cin >> arr[i];
    } 
}

void rellenarApp(string arr[], int tam) {
    for (int i = 0; i < tam; i++) {
    cout << "Ingrese el apellido paterno del " << i + 1 << " participante: ";
    cin >> arr[i];
    } 
}

void rellenarColor(string arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese el color favorito del " << i + 1 << " participante: ";
        cin >> arr[i];
    } 
}

/*
void mostrarArrNombres(string arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "\n Nombre: " << arr[i] << "\n";
    }
}

void mostrarArrApp(string arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "\n Apellido: " << arr[i] << "\n";
    }
}

void mostrarArrColor(string arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "\n Color: " << arr[i] << "\n";
    }
}
*/

int main()
{
    int tam;
    cout << "Ingrese el número de personas a participar: ";
    cin >> tam;
    string nombres[tam];
    string app[tam];
    string color[tam];
    
    rellenarNombre(nombres, tam);
    rellenarApp(app, tam);
    rellenarColor(color, tam);
    
    /*
    mostrarArrNombres(nombres, tam);
    mostrarArrApp(app, tam);
    mostrarArrColor(color, tam);
    
    en esta parte no salia como sale sin hacerlo con función así que así lo deje
    y no sabía como hacerle :(
    */
    
    
    for (int i = 0; i < tam; i++) {
       cout << " Persona " << i + 1 << endl;
       cout << "\n Nombre: " << nombres[i] << "\n";
       cout << "\n Apellido: " <<app[i] << "\n";
       cout << "\n Color: " << color[i] << "\n";
       cout << "\n" << "*--*--*--*" << "\n";
    }
    
    return 0;
}
