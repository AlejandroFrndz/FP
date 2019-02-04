//Programa que determina si un número es un cuadrado perfecto sin utilizar la funcion sqrt
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, numero, cuadrado;
	
	cout << "Introduzca un número ";
	cin >> numero;
	cout << endl;
	
	for(i = 1; cuadrado != numero and i <=numero; i++)
	{
		cuadrado = pow(i,2);
	}
	
	if(cuadrado == numero)
	cout << "El número " << numero << " es un cuadrado perfecto" << endl;
	
	else
	cout << "El número " << numero << " no es un cuadrado perfecto" << endl;
}
