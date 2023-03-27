/*#include <iostream>
using namespace std; 

class figura {
public:
	int ancho;
	int largo;
	float PerimetroFiguras(int largo, int ancho);
	float AreaFiguras(int largo, int ancho);
};
	float figura:: AreaFiguras(int largo, int ancho) {
		int area;
		area = largo * ancho;
		return area;
	}
	
	float figura::PerimetroFiguras (int largo, int ancho) 
	{
		int perimetro; 
		perimetro = 2 * largo + 2 * ancho;
		return perimetro; 
	}
	
	


int main() {
	cout << "introducir el largo y el ancho de la figura" << endl; 
	int largo; 
	int ancho; 
	cin >> largo; 
	cin >> ancho;
	figura obj;
	obj.PerimetroFiguras(largo, ancho);
	obj.AreaFiguras(largo, ancho);
	cout << "el perimetro de la figura siendo un cuadrado es" << obj.PerimetroFiguras(largo, ancho) << endl;
	cout << "el area de la figura siendo un cuadrado es " << obj.AreaFiguras(largo, ancho) << endl;
	return 0;
}*/
#include <iostream>
using namespace std; 

class Figura {
public:
	int altura; 
	int base; 
	int lado1, lado2;
	float AreaTriangulo(int altura, int base);
	float PerimetroTriangulo(int lado1, int lado2, int base);
};

float Figura::AreaTriangulo(int altura, int base) {
	int area; 
	area = (base * altura) / 2; 
	return area; 
}
float Figura::PerimetroTriangulo(int lado1, int lado2, int lado3) {
	float perimetro; 
	perimetro = lado1 + lado2 + lado3; 
	return perimetro;
}
int main() {
	cout << "intoduce el alto y la base de un triangulo (separa cada dato con un enter)" << endl;
	int alto, base;
	cin >> alto;
	cin >> base; 
	cout << "introduce los dos lados restantes del triagulo (separa los datos con un enter)" << endl;
	int lado1, lado2;
	cin >> lado1;
	cin >> lado2; 

	Figura obj; 
	obj.Figura::PerimetroTriangulo(lado1, lado2, base);
	obj.Figura::AreaTriangulo(alto, base);
	cout << "el perimetro del triangulo es " << obj.Figura::PerimetroTriangulo(lado1, lado2, base) << endl;
	cout << "el area del triangulo es " << obj.Figura::AreaTriangulo(alto, base) << endl;
	return 0; 

}