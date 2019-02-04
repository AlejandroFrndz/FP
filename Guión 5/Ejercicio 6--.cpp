//Programa que resuelve la ecuacion x^3 + x -1 = 0 y devuelve la solución con el nivel de precisión indicado por el usuario
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x, precision, ecuacion;
	int decimales;
	
	cout << "Introduzca el número de decimales con el que se desea conocer la solución ";
	cin >> decimales;
	
	precision = 1 * pow(10,-decimales);

	x = pow(27+sqrt(4*3*3*3+27*27),(double)1/3
	
	cout << "La solución con la precisión indicada es x = " << x << endl;
}
