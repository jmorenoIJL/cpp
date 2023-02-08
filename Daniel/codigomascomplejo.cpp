#include "iostream"
using namespace std;
int main()
{
	int cantidad_hombres, cantidad_mujeres, i, r;
	cout << "Introduzca la cantidad de hombres" << endl;
	cin >> cantidad_hombres;
	cout << "introduzca la cantidad de mujeres" << endl;
	cin >> cantidad_mujeres;
	float x, y, z;
	float a, b, c;
	x = 0;
	a = 0;
	y = 0;
	b = 0;
	z = 0;
	c = 0;
	for (i = 1; i <= cantidad_hombres; i++)
	{
		cout << "introduzca el peso del sujeto " << i << endl;
		cin >> y;
		z = y + x;
		x = z;
		cout << "introduzca la altura del sujeto " << i << endl;
		cin >> b;
		c = b + a;
		a = c;
	}
	float e, f, g;
	float h, j, k;
	h = 0;
	e = 0;
	f = 0;
	j = 0;
	g = 0;
	k = 0;
	for (r = 1; r <= cantidad_mujeres; r++)
	{
		cout << "introduce el peso de la mujer " << r << endl;
		cin >> f;
		g = e + f;
		e = g;
		cout << "introduce la estatura de la mujer " << r << endl;
		cin >> j;
		k = j + h;
		h = k;
	}
	float promedio_estatura_hombres, promedio_peso_hombres;
	promedio_estatura_hombres = c / cantidad_hombres;
	promedio_peso_hombres = z / cantidad_hombres;
	float promedio_estatura_mujeres, promedio_peso_mujeres;
	promedio_estatura_mujeres = k / cantidad_mujeres;
	promedio_peso_mujeres = g / cantidad_mujeres;
	cout << "el promedio del peso de los hombres es " << promedio_peso_hombres << endl;
	cout << "el promedio de la estatura de los hombres es " << promedio_estatura_hombres << endl;
	cout << "el promedio del peso de las mujeres es " << promedio_peso_mujeres << endl;
	cout << "el promedio de la estatura de las mujeres es " << promedio_estatura_mujeres << endl;
	return 0;
}
