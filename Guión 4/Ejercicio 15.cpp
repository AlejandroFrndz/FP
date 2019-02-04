//Programa que determina la longitud y el n�mero inicial de la cadena de numeros ordenados de mayor longitud introducida en una serie indeterminada de n�meros introducida por el usuario
#include<iostream>
using namespace std;

int main()
{
	int numero, numero_anterior, longitud_cadena, longitud_mayor_cadena, comienzo_cadena, comienzo_mayor_cadena;
	bool nueva_cadena;
	
	cout << "Introduce n�meros enteros" << endl << "Cuando no desee introducir m�s numeros, escriba 0" << endl;
	cin >> numero;
	
	comienzo_cadena = numero;
	nueva_cadena = false;
	numero_anterior = numero - 1;
	longitud_cadena = 0;
	longitud_mayor_cadena = 0;
	
	
	while(numero != 0)
	{
		if(numero == numero_anterior + 1 or numero == numero_anterior - 1)
		{
			longitud_cadena++;
			nueva_cadena = false;
		}
		
		else
		{
			if(longitud_cadena > longitud_mayor_cadena)
			{
				longitud_mayor_cadena = longitud_cadena;
				comienzo_mayor_cadena = comienzo_cadena;
			}
			
			longitud_cadena = 1;
			nueva_cadena = true;
		}
		
		numero_anterior = numero;
		
		if(nueva_cadena == true)
		{
			comienzo_cadena = numero;
		}
		
		cin >> numero;	
	}
	
	if(longitud_cadena > longitud_mayor_cadena)
	{
		longitud_mayor_cadena = longitud_cadena;
		comienzo_mayor_cadena = comienzo_cadena;
	}
	
	if(longitud_mayor_cadena == 1)
	cout << "No hay ninguna cadena ordenada" << endl;
	else
	cout << "\nLa cadena de n�meros ordenados de mayor longitud introducida comienza con el n�mero " << comienzo_mayor_cadena << " y tiene una longitud de " << longitud_mayor_cadena << " cifras" << endl;
}
