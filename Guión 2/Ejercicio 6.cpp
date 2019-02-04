//Programa que lee los coeficientes y el termino independiente de una ecuación de segundo grado y devuelve sus soluciones
#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main()
{
	double a, b, c, solucionP, solucionN, radical, divisor, raiz;
	
	//Leer los coeficientes y termino independiente
	cout << "Introduce el coeficiente del término al cuadrado: ";
	cin >> a;
	
	cout << "Introduce el coeficiente del término sin cuadrado: ";
	cin >> b;
	
	cout << "Introduce el término independiente: ";
	cin >> c;
	cout << endl;
	
	//Proceso: Determinar si la ecuación tiene dos, una o ninguna raíz, resolver cada caso e imprimir los resultados
	radical = sqrt(b * b - 4.0 * a * c);
	divisor = 2.0 * a;
	raiz = (pow(b,2.0)-4.0*a*c);
	
	solucionP = (-b + radical) / divisor;
	solucionN = (-b - radical) / divisor;
	
	if(raiz == 0 and a != 0)
	{
		cout << "La solución es " << solucionP << " (doble)" << endl;
	}
	
	if(raiz < 0 and a != 0 )
	{
		cout << "La ecuación no tiene solución" << endl;
	}
		
	if(raiz > 0 and a != 0 )
	{
		cout << "La solución positiva es: " << solucionP << endl << "La solución negativa es: " << solucionN << endl;
	}
	
	if(a == 0)
	{
		solucionP = -c/b;
		cout << "La única solución es " << solucionP << endl;
	}
	
	getch();
	return 0;
}
