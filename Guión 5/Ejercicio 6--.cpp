//Programa que resuelve la ecuacion x^3 + x -1 = 0 y devuelve la soluci�n con el nivel de precisi�n indicado por el usuario
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x, precision, ecuacion;
	int decimales;
	
	cout << "Introduzca el n�mero de decimales con el que se desea conocer la soluci�n ";
	cin >> decimales;
	
	precision = 1 * pow(10,-decimales);

	x = pow(27+sqrt(4*3*3*3+27*27),(double)1/3
	
	cout << "La soluci�n con la precisi�n indicada es x = " << x << endl;
}
