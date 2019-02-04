//Programa que lee 4 números enteros y determinar el mayor número de todos ellos que además es par
#include<iostream>
using namespace std;

int main()
{
	int numero1, numero2, numero3, numero4, mayor;
	bool es_par = false;
	
	//Lectura de las variables de entrada
	cout << "Introduzca 4 números enteros distintos de 0 separados por espacios ";
	cin >> numero1 >> numero2 >> numero3 >> numero4;
	cout << endl;
	
	/*
	Proceso: Determinar si los números introducidos por el usuario son pares. En los casos en los que el número sea par,
	determinar cual de ellos es mayor. Si ningún numero introducido es par, gracias a la inicialización de es_par como false
	el programa sabe que ninguno de los numeros que ha recibido es par.
	*/
	if(numero1 % 2 == 0)
	{
		es_par = true;
		mayor = numero1;
	}
	
	if(numero2 % 2 == 0)
	{
		if(es_par == true)
		{
			if(numero2 > mayor)
			{
				mayor = numero2;
			}
		}
		
		if(es_par == false)
		{
			mayor = numero2;
		}
		
		es_par = true;
	}
	
	if(numero3 % 2 == 0)
	{
		if(es_par == true)
		{
			if(numero3 > mayor)
			{
				mayor = numero3;
			}
		}
		
		if(es_par == false)
		{
			mayor = numero3;
		}
		
		es_par = true;
	}
	
	if(numero4 % 2 == 0)
	{
		if(es_par == true)
		{
			if(numero4 > mayor)
			{
				mayor = numero4;
			}
		}
		
		if(es_par == false)
		{
			mayor = numero4;
		}
		
		es_par = true;
	}
	
	/*
	Imprimir los resultados obtenidos en el proceso, indicandole al usuario cual de los números pares que ha introducido es mayor o, si se da el caso,
	haciendole saber que ninguno es par. Si alguno de los números introducidos es 0, el programa avisa al usuario
	*/
	if(es_par == false and (numero1 and numero2 and numero3 and numero4) != 0)
	{
		cout << "Ninguno de los números introducidos es par" << endl;
	}
	
	if(es_par == true and (numero1 and numero2 and numero3 and numero4) != 0)
	{
		cout << "El mayor número par introducido es: " << mayor << endl;
	}
	
	if(numero1 == 0 or numero2 == 0 or numero3 == 0 or numero4 == 0)
	{
		cout << "Los números introducidos deben ser distintos de 0" << endl;
	}
}
