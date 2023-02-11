#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void intNombres( string nombres [], int tam) {
    cout << "Hola, Bienvenido, por favor introduce 5 nombres para posteriormente acomodarlos en orden alfabetico" << "\n";
    for (int i=0; i<tam; i++){
        cin >> nombres [i];
    }
}

void OrdenarNombres (string nombres [], int tam, string orden) {
    if (orden == "no") cout << "Este es el orden con el cual fueron introducidos los nombres:" << endl;
      else if (orden == "si") cout << "nombres ordenados alfabeticamente:" << endl;
      for (int i = 0; i < tam; i++) {
          cout << i + 1 << ". " << nombres[i] << endl;
      }
    
    
    
}
int main() {
    int tam =5;
    string nombres[tam];
    intNombres(nombres,tam);
    OrdenarNombres (nombres, tam, "no");

    sort(nombres, nombres + tam);
    OrdenarNombres (nombres, tam, "si");
    return 0;
}

