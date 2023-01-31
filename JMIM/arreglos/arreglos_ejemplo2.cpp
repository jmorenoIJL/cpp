// 

#include "iostream"
#include "string"
using namespace std;

int main()
{
    int limite = 3; // aqui podemos dar la opcion al usuario.
    //string titulos[3];
    string titulos[limite];
    
    //string autores[3];
    string autores[limite];
    cout << "Por favor ingrese la siguiente información de los Libros: \n";
    for(int i = 0; i < limite; i++)
    {
        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "Titulo: ";
        //cin >> titulos[i]; //No funciona con espacios
        getline(cin, titulos[i]);
        cout << "Autor: ";
        //cin >> autores[i]; //No funciona con espacios
        getline(cin, autores[i]);
    }
    
    cout << "\n******* ::: Datos almacenados ::: ********:\n";
    
    
    // mostramos el contenido de los datos almacenados
    
    for(int y = 0; y < limite; y++){
        cout << "\n Libro #" << y + 1 << "\n";
        cout << "\n Titulo: " << titulos[y] << "\n";
        cout << "\n Autor: " << autores[y] << "\n";
        cout << "\n  " << "-*-*-*-*-*" << "\n";
    }
}