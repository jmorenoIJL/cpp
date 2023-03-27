/*#include <iostream>
#include <string>

using namespace std;


void rellenarArr(string arreglo[], char proposito) {
    for (int i = 0; i < tam; i++) {
        switch (proposito)
        {
        case 'n':
            cout << "Ingrese el nombre del " << i + 1 << " participante: "; 
            cin >> arreglo[i];
            break;
        case 'a':
            cout << "Ingrese el apellido paterno del " << i + 1 << " participante: ";
            cin >> arreglo[i];
            break;
        case 'c':
            cout << "Ingrese el color favorito del " << i + 1 << " particpante: ";
            cin >> arreglo[i];
            break;
        default:
            break;
        }
    }
}

int main()
{ 
    string nombres[5];
    string app[5];
    string color[5];
    
    rellenarArr(nombres, 'n');
    rellenarArr(app, 'a');
    rellenarArr(color, 'c');
    
    for (int i = 0; i < 5; i++) {
       cout << " Persona " << i + 1 << endl;
       cout << "\n Nombre: " << nombres[i] << "\n";
       cout << "\n Apellido: " <<app[i] << "\n";
       cout << "\n Color: " << color[i] << "\n";
       cout << "\n" << "*--*--*--*" << "\n";
    }
    
    return 0;
}*/

#include <iostream>
using namespace std;

void llenar(int arreglo[]) {
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese el " << i + 1 << " numero: ";
		cin >> arreglo[i];
	}
}

int promedio(int arreglo[]) {
    int suma = 0;
    for (int i = 0; i < 5; i ++) {
        suma += arreglo[i];
    }
    
    return suma / 5;
}

int main() {
    int arreglo[5];
    llenar(arreglo);
    cout << "El promeio de los números ingresados es: " << promedio(arreglo) << endl;
    
    return 0;
}

