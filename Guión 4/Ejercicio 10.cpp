//Programa que determina si un n�mero es perfecto
#include<iostream>
using namespace std;

int main()
{
	long int numero, perfecto, i;
	
	cout << "Introduzca un n�mero ";
	cin >> numero;
	cout << endl;
	
	perfecto = 0;
	
	for(i = 1; i < numero; i++)
	{
		if(numero % i == 0)
		{
			perfecto = perfecto + i;
		}
	}
	
	if(perfecto != numero)
	{
		cout << numero << " no es perfecto" << endl;
	}
	
	else
	{
		cout << numero << " es perfecto" << endl;
	}
}
	
