//
//  main.cpp
//  act 3.2
//
//  Created by Alvaro Emiliano Sanchez Salazar on 25/01/23.
//
#include <stdlib.h>
#include <iostream>
using namespace std;
int main() {
    int num = 0;
    int arr [num], i;
    cout << " ingresa la cantidad de numeros que deseas guardad" << endl;
        cin >> num;
    
    for (i=0; i<num; i++){
        arr [i]=rand () % 100;
    }
        
        cout << " los numeros aleatorios son: " << endl;
    for ( int i=0; i<num; i++){
        cout << arr [i] << endl; // es aqui donde se crashea
    }
            
            cout << " los numeros pares son " << endl;
            for (int i=0; i<num; i++){
                if (arr[i] % 2 == 0) cout << arr [i] << endl;
            }
    
        
        
          
        
    return 0;
}

