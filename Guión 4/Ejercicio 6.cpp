//Programa que lee n números reales y determina el real introducido más cercano a 0
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double numero, 
			 cercano = 0;
	
	cout << "Introduzca números reales" << endl << "Cuando no desee introducir más números, escriba un 0" << endl;
	cin >> cercano;
	
	while(numero != 0)
	{
		cin >> numero;
		
		if(abs(numero) < abs(cercano) and numero != 0)
		{
			cercano = numero;
		}
	}
	
	cout << "\nEl número más cercano a 0 de los introducidos es " << cercano << endl;
}
