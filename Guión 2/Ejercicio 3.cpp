//Programa que lee tres números enteros y determina el mayor
#include<iostream>
using namespace std;

int main ()
{
	int numero1, numero2, numero3;
	
	//Leer los datos de entrada
	cout << "Introduzca 3 números enteros: " << endl;
	cin >> numero1 >> numero2 >> numero3;
	
	//Proceso: Determinar cual de los 3 números es mayor e imprimir el resultado
	if(numero1 > numero2 and numero1 > numero3)
	{
		cout << endl << numero1 << " es mayor" << endl;
	}
	
	else
	{
		if(numero2 > numero1 and numero2 > numero3)
		{
			cout << endl << numero2 << " es mayor" << endl;
		}
	
		else 
		{
			if(numero3 > numero1 and numero3 > numero2)
			{
				cout << endl << numero3 << " es mayor" << endl;
			}
	
			else
			{
			cout << endl << "Los tres números son iguales" << endl;
			}
		}
	}
}
