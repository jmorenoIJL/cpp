#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void registrarNombres(string nombres[], int tam) {
    cout << "Ingresa " << tam << " nombres: " << endl;
    for (int i = 0; i < tam; i++) {
        cin >> nombres[i];
    }
}

void mostrarNombres(string nombres[], int tam, string orden) {
    if (orden == "no") cout << "Lista desordenada:" << endl;
    else if (orden == "si") cout << "Lista ordenada:" << endl;
    for (int i = 0; i < tam; i++) {
        cout << i + 1 << ". " << nombres[i] << endl;
    } 
}

int main()
{
    int tam = 5;
    string nombres[tam];
    
    registrarNombres(nombres, tam);
    
    mostrarNombres(nombres, tam, "no");
    
    /* Aquí tomamos dos parámetros, el inicio del
    array y la longitud "tam" que es hasta donde que queremos que el array
    se ordene 
    https://www.geeksforgeeks.org/sort-c-stl/ 
    https://cplusplus.com/reference/algorithm/sort/ 
    eso fueron los links en los que tome como se usaba la función sort.
    */
    sort(nombres, nombres + tam);
    
    cout << "\n" << "*--*--*--*" << "\n";
    
    mostrarNombres(nombres, tam, "si");
    


    return 0;
}
