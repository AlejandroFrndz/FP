//Programa que lee 3 enteros distintos de 0 y determina que signo predomina
#include<iostream>
using namespace std;

int main()
{
	int numero1, numero2, numero3, positivos = 0, negativos = 0;
	
	cout << "Introduzca 3 números enteros distintos de 0 separados por espacios ";
	cin >> numero1 >> numero2 >> numero3;
	cout << endl;
	
	if(numero1 > 0)
	{
		positivos = positivos + 1;
	}
	if(numero1 < 0)
	{
		negativos = negativos + 1;
	}
	
	if(numero2 > 0)
	{
		positivos = positivos + 1;
	}
		
	if(numero2 < 0)
	{
		negativos = negativos + 1;
	}
	
	if(numero3 > 0)
	{
		positivos = positivos + 1;
	}
		
	if(numero3 < 0)
	{
		negativos = negativos + 1;
	}
	
	if((numero1 > 0 or numero1 < 0) and (numero2 > 0 or numero2 < 0) and (numero3 > 0 or numero3 < 0))
	{
		if(positivos > negativos)
		{
			cout << "El signo positivo predomina" << endl;
		}
	
		else
		{
			cout << "El signo negativo predomina" << endl;
		}
	}
	
	else
	{
		cout << "Los números introducidos no pueden ser 0" << endl;
	}
}
