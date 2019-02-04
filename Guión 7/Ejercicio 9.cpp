//Programa que lee un vectro de enteros y devuelve la posicion de cominezo y la longitud de la mayor cadena de 1 contenida en el vector
#include<iostream>
using namespace std;

int main()
{
	int const MAX = 1000;
	int V[MAX], UtilV, longitud, longitud_max, comienzo, comienzo_max, failsafe;
	
	cout << "Introduzca el tamaño del vector ";
	cin >> UtilV;
	
	if(UtilV > MAX || UtilV < 0)
	{
		do
		{
			cout << "El tamaño del vector no puede ser superior a " << MAX << " unidades ni ser inferior a 0. Por favor, introduzca un tamaño válido";
			cin >> UtilV;
			
		}while(UtilV > MAX || UtilV < 0);
	}
	
	cout << "Introduzca el vector" << endl;
	
	for(int i = 0; i < UtilV; i++)
		cin >> V[i];
	
	longitud = 0;
	comienzo = 0;
	longitud_max = 0;
	
	for(int i = 0; i < UtilV; i++)
	{
		if(V[i] == 1)
			longitud++;
		
		if(V[i] != 1)
		{
			if(longitud > longitud_max)
			{
				longitud_max = longitud;
				comienzo_max = comienzo;
				failsafe = V[comienzo_max];
			}
			
			longitud = 0;
			comienzo = i + 1;
		}
	}
	
	if(longitud > longitud_max)
	{
		longitud_max = longitud;
		comienzo_max = comienzo;
		failsafe = V[comienzo_max];
	}
	
	if(failsafe != 1)
		cout << "\nEl vector no contiene ningún 1" << endl;
	else
		cout << "\nLa mayor cadena de 1 comienza en la posición " << comienzo_max + 1 << " y tiene una longtitud de " << longitud_max << " unos " << endl;
}
