//Programa que lee n números reales y devuelve el segundo mayor de todos ellos
#include<iostream>
using namespace std;

int main()
{
	double numero, maximo, mayor;
	const double TERMINADOR = 0;
	
	cout << "Introduzca números reales" << endl << "Cuando no desee introducir más números, escriba 0" << endl;
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
	
	cout << "\nEl segundo número más grande de los introducidos es " << mayor << endl;
}
