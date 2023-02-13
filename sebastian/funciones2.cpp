#include <iostream>
#include <string>

using namespace std;


void rellenarArr(string arr[], int tam, char proposito) {
    for (int i = 0; i < tam; i++) {
        switch (proposito)
        {
        case 'n':
            cout << "Ingrese el nombre del " << i + 1 << " participante: "; 
            cin >> arr[i];
            break;
        case 'a':
            cout << "Ingrese el apellido paterno del " << i + 1 << " participante: ";
            cin >> arr[i];
            break;
        case 'c':
            cout << "Ingrese el color favorito del " << i + 1 << " particpante: ";
            cin >> arr[i];
            break;
        default:
            break;
        }
    }
}

int main()
{
    int tam;
    cout << "Ingrese el número de personas a participar: ";
    cin >> tam;
    string nombres[tam];
    string app[tam];
    string color[tam];
    
    rellenarArr(nombres, tam, 'n');
    rellenarArr(app, tam, 'a');
    rellenarArr(color, tam, 'c');
    
    for (int i = 0; i < tam; i++) {
       cout << " Persona " << i + 1 << endl;
       cout << "\n Nombre: " << nombres[i] << "\n";
       cout << "\n Apellido: " <<app[i] << "\n";
       cout << "\n Color: " << color[i] << "\n";
       cout << "\n" << "*--*--*--*" << "\n";
    }
    
    return 0;
}