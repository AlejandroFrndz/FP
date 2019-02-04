//Programa que lee un entero y determina si es un múltiplo de 5 mayor que 1000
#include<iostream>
using namespace std;

int main()
{
	int numero;
	bool condiciones;
	
	//Lectura de los datos de entrda
	cout << "Introduzca un número entero: ";
	cin >> numero;
	cout << endl;
	
	//Proceso: Determinar si el número es múltiplo de 5 y mayor que 1000
	if(numero % 5 == 0 and numero > 1000)
	{
		condiciones = true;			
	}
	
	else
	{
		condiciones = false;
	}
	
	//Mostrar el resultado por pantalla
	if( condiciones == true )
	{
		cout << numero << " es múltiplo de 5 mayor que 1000" << endl;
	}
	
	else
	{
		cout << numero << " no es múltiplo de 5 o no es un múltiplo de 5 mayor que 1000" << endl;
	}
}
