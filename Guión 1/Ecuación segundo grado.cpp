//Programa que lee los coeficientes y el termino independiente de una ecuaci�n de segundo grado y devuelve sus soluciones
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c, solucionP, solucionN;
	
	//Leer los coeficientes y termino independiente
	cout << "Introduce el coeficeinte del t�rmino al cuadrado: ";
	cin >> a;
	
	cout << "Introduce el coeficiente del t�rmino sin cuadrado: ";
	cin >> b;
	
	cout << "Introduce el t�rmino independiente: ";
	cin >> c;
	cout << endl;
	
	//Proceso: Resolver la ecuaci�n mostrando ambas soluciones
	solucionP = (-b + sqrt(b * b - 4.0 * a * c)) / 2.0 * a;
	solucionN = (-b - sqrt(b * b - 4.0 * a * c)) / 2.0 * a;
	
	//Imprimir ambas soluciones
	cout << "La soluci�n de la ra�z positiva es: " << solucionP << endl;
	cout << "La soluci�n de la ra�z negativa es: " << solucionN << endl;
}
