//Programa que lee 25 enteros y muestr los comprendidos entre el mayor entero negativo y el menor entero postivo
#include<iostream>
using namespace std;

int main()
{
	int i = 1, x, numero, mayor_negativo, menor_positivo;
		
		cout << "Introduce 25 numeros enteros " << endl;
		cin >> numero;
	
	menor_positivo = 32767;
	mayor_negativo = -32767;
	
	while(i < 25)
	{
		
		cin >> numero;
		
		if(numero > 0 and numero < menor_positivo)
		{
			menor_positivo = numero;
		}
		
		if(numero < 0 and numero > mayor_negativo)
		{
			mayor_negativo = numero;
		}
		
		i++;
		
	}
	
	cout << endl;
	
	x = mayor_negativo + 1;
	
	while(x < menor_positivo)
	{
		cout << x << " ";
		
		x++;
		
	}

	cout << endl;
}
