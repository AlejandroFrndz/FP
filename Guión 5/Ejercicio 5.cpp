//Programa que lee 100 números reales o n < 100 reales hasta que uno es mayor a 1000 e imprime el mayor número leido
#include<iostream>
using namespace std;

int main()
{
	int total;
	float numero, mayor_numero;
	
	cout << "Introduzca números reales hasta un máximo de 100. Para parar, introduzca un número mayor que 1000 ";
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
	
	cout << "El mayor número introducido es " << mayor_numero << endl;
}
