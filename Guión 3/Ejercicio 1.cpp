//Programa que lee un entero y determina si es positivo, negativo o 0
#include<iostream>
using namespace std;
int main()
{
	int numero;
	
	//Lectura de los datos de entrada
	cout << "Introduzca un n�mero entero: ";
	cin >> numero;
	
	//Proceso: Determinar si el n�mero introducido es postivo, negativo o 0 e imprimir la conclusi�n obtenida
	if(numero > 0)
	{
		cout << endl << numero << " es positivo" << endl;
	}
	
	if(numero < 0)
	{
		cout << endl << numero << " es negativo" << endl;
	}
	
	if(numero == 0)
	{
		cout << endl << "El n�mero introducido es 0" << endl;
	}
}
