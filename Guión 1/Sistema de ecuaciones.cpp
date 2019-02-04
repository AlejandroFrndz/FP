//Programa que lee los coeficientes y terminos independientes de un sistema de ecuaciones y proporciona su resultado
#include<iostream>
#include<cmath>
using namespace std;

main()
{
	double a, b, c, d, e, f, solucionX, solucionY;
	
	//Leer los coeficientes y terminos independientes de la primera ecuacion
	cout << "Introduce el coeficiente X de la primera ecuación: ";
	cin >> a;
	cout << "Introduce el coefIciente Y de la primera ecuación: ";
	cin >> b;
	cout << "Introduce el término independiente de la primera ecuación: ";
	cin >> c;
	cout << endl;
	
	//Leer los coeficientes y terminos independientes de la primera ecuacion
	cout << "Introduce el coeficiente X de la segunda ecuación: ";
	cin >> d;
	cout << "Introduce el coefIciente Y de la segunda ecuación: ";
	cin >> e;
	cout << "Introduce el término independiente de la segunda ecuación: ";
	cin >> f;
	cout << endl;
	
	//Proceso: Calcular los resultados
	solucionY = (f - d * c / a) / (-d * b / a + e);
	solucionX = (c - b * solucionY) / a;
	
	//Imprimir ambos resultados
	cout << "La X vale: " << solucionX << endl;
	cout << "La Y vale: " << solucionY << endl;
}
