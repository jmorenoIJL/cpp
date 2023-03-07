#include <iostream>
using namespace std;

int main() 
{
    // Definimos la matriz
    int matriz[2][3] = {
        {4, 8, 7},
        {6, 1, 9}
    };
    
    // Mostramos los datos de la matriz
    cout << "Matriz: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    // Sumamos la columna B
    int suma = 0;
    for (int i = 0; i < 2; i++) {
        suma += matriz[i][1]; // La columna B es la segunda columna (índice 1)
    }
    
    // Mostramos el resultado de la suma de la columna B
    cout << "Suma de la columna B es: " << suma << endl;
    
    return 0;
}
