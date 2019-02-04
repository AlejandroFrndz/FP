//Programa que determina si n numeros de entrada estan ordenados de forma creciente
#include<iostream>
using namespace std;

int main()
{
	double numero, numero_anterior;
	bool orden = true;
	
	cout << "Introduce una sucesión de números\n Cuando no desee introducir más números, escriba 0" << endl;
	cin >> numero;
	
	numero_anterior = numero;
	
	while(numero != 0)
	{
		cin >> numero;
		
		if(numero < numero_anterior and numero != 0)
		{
			orden = false;
		}
		
		numero_anterior = numero;
	}
	
	if(orden == true)
	{
		cout << "\nLos números introducidos están ordenados de forma creciente";
	}
	
	else
	{
		cout << "\nLos números introducidos no están ordenados de forma creciente";
	}
}
