//Programa que lee enteros hasta que se introduce un n�mero par y muestra por pantalla la media de los n�meros introducidos
#include<iostream>
using namespace std;

int main()
{
	int numero, numerador, denominador, media;
	
	cout << "Introduzca n�meros impares" << endl << "Cuando no desee introducir m�s n�meros, introduzca un n�mero par" << endl;
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
	
	cout << "La media de los n�meros introducidos es " << media << endl;
}
