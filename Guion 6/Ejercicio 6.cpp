//Programa que calcula el n�mero de cifras de un n entero leido
#include<iostream>
using namespace std;

int main()
{
	int i, numero, cifras;
	
	cout << "Introduzca un n�mero ";
	cin >> numero;
	
	cifras = 0;
	
	for(i = 1 ; i <= numero; i *= 10)
	{
		cifras++;
	}
	
	cout << "El numero " << numero << " tiene " << cifras << " cifras";
}
