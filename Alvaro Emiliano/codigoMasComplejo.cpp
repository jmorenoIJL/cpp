#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std ;
int main() {
    float promedio;
    cout << "hola, bienvenido, porfavor, ingresa el numero de personas masculinas" << endl;
    int nm;
    cin >> nm;
    float total = 0;
    float altura[nm];
    
    for (int j=0; j<nm; j++) {
        cout << "ingrese la altura de las personas masculinas " << j + 1 << endl;
        cin >> altura [j];
        total += altura [j];
    }
    promedio = total/nm;
    cout << "el promdeio de las " << nm << " alturas es " << promedio << endl;
    cout << endl;
    
    
    float totala = 0;
    float peso[nm];
    for (int i=0; i<nm; i++) {
        cout << "ingrese el peso de las personas masculinas " <<  i + 1 << endl;
        cin >> peso[i];
        totala += peso[i];
            }
    promedio = totala / nm;
    cout << "el promedio de las " << nm << " es "<<promedio << endl;
    cout << endl;
      
    cout << "Por favor  ingresa el numero de personas femeninas " << endl;
    int nf;
    cin >> nf;
    float totalf = 0;
    float alturaf[nf];
    for(int n=0; n<nf; n++) {
        cout << "ingrese la altura de las personas femeninas " << n + 1 << endl;
        cin >> alturaf [n];
        totalf += alturaf[n];
    }
        promedio = totalf/nf;
        cout << "el promedio de las " << nf << " es " << promedio << endl;
    
    float totale =0;
    float pesof [nf];
    for (int p =0; p<nf; p++) {
        cout << "ingrese el peso de las personas femeninas " << p + 1 << endl;
        cin >> pesof[p];
        totale += pesof [p];
    }
    promedio = totale/nf;
    cout << "el promedio de las " << nf << " es " << promedio << endl;
    
    return 0;
    }


    

