//Programa que lee enteros hasta que se introduce un número par y muestra por pantalla la media de los números introducidos
#include<iostream>
using namespace std;

int main()
{
	int numero, numerador, denominador, media;
	
	cout << "Introduzca números impares" << endl << "Cuando no desee introducir más números, introduzca un número par" << endl;
	cin >> numero;
	
	numerador = 0;
	denominador = 0;
	
	while(numero % 2 != 0)
	{
		numerador = numerador + numero;
		denominador++;
		
		cin >> numero;
	}
	
	if(denominador != 0)
	media = numerador / denominador;
	
	else
	media = 0;
	
	cout << "La media de los números introducidos es " << media << endl;
}
