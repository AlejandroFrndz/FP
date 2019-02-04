//Programa que calcula el número de cifras de un n entero leido
#include<iostream>
using namespace std;

int main()
{
	int i, numero, cifras;
	
	cout << "Introduzca un número ";
	cin >> numero;
	
	cifras = 0;
	
	for(i = 1 ; i <= numero; i *= 10)
	{
		cifras++;
	}
	
	cout << "El numero " << numero << " tiene " << cifras << " cifras";
}
