//Función que toma un x real y un n entero y calcule x^n
#include<iostream>
using namespace std;

double Potencia(double x, int n)
{
	double resultado = 1;
	
	for(int i = 1; i <= n ; i++)
		resultado = resultado * x;
	
	return resultado;
}

int main()
{
	int exponente;
	double base, resultado;
	
	cout << "Introduce la base real: ";
	cin >> base;
	cout << "Introduce el exponente entero: ";
	cin >> exponente;
	
	resultado = Potencia(base, exponente);
	
	cout << resultado;
}
