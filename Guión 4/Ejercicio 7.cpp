//Programa que lee n n�meros reales y devuelve el segundo mayor de todos ellos
#include<iostream>
using namespace std;

int main()
{
	double numero, maximo, mayor;
	const double TERMINADOR = 0;
	
	cout << "Introduzca n�meros reales" << endl << "Cuando no desee introducir m�s n�meros, escriba 0" << endl;
	cin >> numero;
	
	maximo = numero;
	mayor = numero;
	
	while(numero != TERMINADOR)
	{
		cin >> numero;
		
		if(numero > maximo)
		{
			maximo = numero;
		}
		
		if(numero < maximo and numero > mayor)
		{
			mayor = numero;
		}
	}
	
	cout << "\nEl segundo n�mero m�s grande de los introducidos es " << mayor << endl;
}
