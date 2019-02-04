//Programa que calcula el factorial de un n�mero introducido
#include<iostream>
using namespace std;

int main()
{
	int numero, i = 1;
	long long factorial = 1;
	
	cout << "Introduzca un n�mero entero ";
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
