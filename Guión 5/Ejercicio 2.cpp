//Programa que determina si un n�mero es un cuadrado perfecto sin utilizar la funcion sqrt
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, numero, cuadrado;
	
	cout << "Introduzca un n�mero ";
	cin >> numero;
	cout << endl;
	
	for(i = 1; cuadrado != numero and i <=numero; i++)
	{
		cuadrado = pow(i,2);
	}
	
	if(cuadrado == numero)
	cout << "El n�mero " << numero << " es un cuadrado perfecto" << endl;
	
	else
	cout << "El n�mero " << numero << " no es un cuadrado perfecto" << endl;
}
