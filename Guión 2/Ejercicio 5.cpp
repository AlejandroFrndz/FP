//Programa que lee un número y determina si tiene a 2 y 3 como factores primos
#include<iostream>
using namespace std;

int main ()
{
	int numero;
	bool factor2, factor3;
	
	//Lectura de los datos de entrda
	cout << "Introduzca un número ";
	cin >> numero;
	cout << endl;
	
	//Proceso: Determinar si el número introducido tiene como factores primos 2 y 3
	if(numero % 2 == 0)
	{
		factor2 = true;
	}
	else
	{
		factor2 = false;
	}
	
	if(numero % 3 == 0)
	{
		factor3 = true;
	}
	else
	{
		factor3 = false;
	}
	
	if(factor2 == true)
	{
		cout << "2 es factor primo de " << numero << endl;
	}
	
	if(factor3 == true)
	{
		cout << "3 es factor primo de " << numero << endl;
	}
	
	if(factor2 == false and factor3 == false)
	{
		cout << "Ni 2 ni 3 son factores primos de " << numero << endl;
	}
}
