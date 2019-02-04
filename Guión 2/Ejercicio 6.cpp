//Programa que lee los coeficientes y el termino independiente de una ecuaci�n de segundo grado y devuelve sus soluciones
#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main()
{
	double a, b, c, solucionP, solucionN, radical, divisor, raiz;
	
	//Leer los coeficientes y termino independiente
	cout << "Introduce el coeficiente del t�rmino al cuadrado: ";
	cin >> a;
	
	cout << "Introduce el coeficiente del t�rmino sin cuadrado: ";
	cin >> b;
	
	cout << "Introduce el t�rmino independiente: ";
	cin >> c;
	cout << endl;
	
	//Proceso: Determinar si la ecuaci�n tiene dos, una o ninguna ra�z, resolver cada caso e imprimir los resultados
	radical = sqrt(b * b - 4.0 * a * c);
	divisor = 2.0 * a;
	raiz = (pow(b,2.0)-4.0*a*c);
	
	solucionP = (-b + radical) / divisor;
	solucionN = (-b - radical) / divisor;
	
	if(raiz == 0 and a != 0)
	{
		cout << "La soluci�n es " << solucionP << " (doble)" << endl;
	}
	
	if(raiz < 0 and a != 0 )
	{
		cout << "La ecuaci�n no tiene soluci�n" << endl;
	}
		
	if(raiz > 0 and a != 0 )
	{
		cout << "La soluci�n positiva es: " << solucionP << endl << "La soluci�n negativa es: " << solucionN << endl;
	}
	
	if(a == 0)
	{
		solucionP = -c/b;
		cout << "La �nica soluci�n es " << solucionP << endl;
	}
	
	getch();
	return 0;
}
