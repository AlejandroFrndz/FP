//Programa que lee n n�meros reales y determina el real introducido m�s cercano a 0
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double numero, 
			 cercano = 0;
	
	cout << "Introduzca n�meros reales" << endl << "Cuando no desee introducir m�s n�meros, escriba un 0" << endl;
	cin >> cercano;
	
	while(numero != 0)
	{
		cin >> numero;
		
		if(abs(numero) < abs(cercano) and numero != 0)
		{
			cercano = numero;
		}
	}
	
	cout << "\nEl n�mero m�s cercano a 0 de los introducidos es " << cercano << endl;
}
