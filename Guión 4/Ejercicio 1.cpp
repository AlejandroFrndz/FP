//Programa que calcula el factorial de un número introducido
#include<iostream>
using namespace std;

int main()
{
	int numero, i = 1;
	long long factorial = 1;
	
	cout << "Introduzca un número entero ";
	cin >> numero;
	cout << endl;
	
	while(i <= numero)
	{
		factorial = factorial * i;
		i = i + 1;
	}
	
	if(numero == 0)
	{
		factorial = 1;
	}
	
	cout << "El factorial de " << numero << " es " << factorial << endl;
}
