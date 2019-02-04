//Programa que lee los coeficientes y el termino independiente de una ecuación de segundo grado y devuelve sus soluciones
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c, solucionP, solucionN;
	
	//Leer los coeficientes y termino independiente
	cout << "Introduce el coeficeinte del término al cuadrado: ";
	cin >> a;
	
	cout << "Introduce el coeficiente del término sin cuadrado: ";
	cin >> b;
	
	cout << "Introduce el término independiente: ";
	cin >> c;
	cout << endl;
	
	//Proceso: Resolver la ecuación mostrando ambas soluciones
	solucionP = (-b + sqrt(b * b - 4.0 * a * c)) / 2.0 * a;
	solucionN = (-b - sqrt(b * b - 4.0 * a * c)) / 2.0 * a;
	
	//Imprimir ambas soluciones
	cout << "La solución de la raíz positiva es: " << solucionP << endl;
	cout << "La solución de la raíz negativa es: " << solucionN << endl;
}
