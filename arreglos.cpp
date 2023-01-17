// Uso de un arreglo
#include <iostream>
using namespace std;

int main(){
    
    cout<< "te voy a solicitar 3 numeros, escribelos y pulsa enter.\n";
    
    int numeros[3], i, limite;
    limite = sizeof(numeros[3]);
    
    for (i=0; i < limite; i++){ // Pedimos X números
       cin >> numeros[i];
    }
    
    // Aquí ya terminamos de pedir
    for (i=0; i < limite; i++){ // Mostramos X números
       cout << "posicion " << i <<"->" << numeros[i] << " \n";
    }
    return 0;
}