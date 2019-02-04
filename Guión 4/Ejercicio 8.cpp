//Programa que lee un número y devuelve sus divisores Extra: Indicando además si es primo o no
#include<iostream>
using namespace std;

int main ()
{
	int numero, divisor;
	bool es_primo = true;
	
	cout << "Introduzca un número entero ";
	cin >> numero;
	cout << "\nLos divisores de " << numero << " son:" << endl << endl;
	
	for(divisor = 1; divisor <= numero; divisor++)
	{
		if(numero % divisor == 0)
		{
			cout << divisor << " ";
		}
		
		if(numero % divisor == 0 and (divisor != 1 and divisor != numero))
		{
			es_primo = false;
		}
	}
	
	if(es_primo)
	{
		cout << "\nPor tanto, " << numero << " es primo" << endl;
	}
	
	else
	{
		cout << "\nPor tanto, " << numero << " no es primo" << endl;
	}
	
}
	
