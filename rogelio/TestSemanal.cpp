#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 
 void llenarvector(string vector[],int tamaño) {
	int i; 
	for (i = 0; i < tamaño; i++) {
		cin >> vector[i];
}
	return; 
}
 void mostrarvector(string vector[], int tamaño) {
	 int j; 
	 for (j = 0; j < tamaño; j++) {
		 cout << vector[j] << endl; 
	 }
 }
int main() {
	int tamaño = 5;
	string vector[6];
	cout << "Introduzca 5 nombres al azar" << endl;
	llenarvector(vector, tamaño);
	cout << "Sus nombres son: " << endl; 
	mostrarvector(vector, tamaño);
	sort(vector, vector + tamaño); 
	cout << "sus nomrbes ordenados son: " << endl;
	mostrarvector(vector, tamaño);
	return 0; 
}
