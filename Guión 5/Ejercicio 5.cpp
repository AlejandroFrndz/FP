//Programa que lee 100 n�meros reales o n < 100 reales hasta que uno es mayor a 1000 e imprime el mayor n�mero leido
#include<iostream>
using namespace std;

int main()
{
	int total;
	float numero, mayor_numero;
	
	cout << "Introduzca n�meros reales hasta un m�ximo de 100. Para parar, introduzca un n�mero mayor que 1000 ";
	cin >> numero;
	
	mayor_numero = numero;
	total = 1;
	
	while(total < 100 and numero < 1000)
	{
		if(numero > mayor_numero)
		{
			mayor_numero = numero;
		}
		
		cin >> numero;
		
		total++;
	}
	
	if(numero < 1000)
	{
		if(numero > mayor_numero)
		mayor_numero = numero;
		
	}
	
	cout << "El mayor n�mero introducido es " << mayor_numero << endl;
}
