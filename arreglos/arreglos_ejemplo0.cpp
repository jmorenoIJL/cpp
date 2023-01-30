// Uso de un arreglo
// tema // https://www.include-poetry.com/Code/C++/Estructuras/Arreglos/
// tema // https://www.programarya.com/Cursos/C++/Estructuras-de-Datos/Arreglos-o-Vectores
// compilador // https://www.onlinegdb.com/online_c++_compiler
#include <iostream>
using namespace std;

int main(){
    
    cout<< "te voy a solicitar 3 numeros, escribelos y pulsa enter.\n";
    
    int numeros[3], i, limite;
    limite = 3;
    
    for (i=0; i < limite; i++){ // Pedimos X números
       cin >> numeros[i];
    }
    
    // Aquí ya terminamos de pedir
    for (i=0; i < limite; i++){ // Mostramos X números
       cout << "posicion " << i <<"->" << numeros[i] << " \n";
    }

    return 0;
}
