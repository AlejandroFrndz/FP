//Programa que lee un entero y muestra su representaci�n en binario
#include<iostream>
using namespace std;

int main()
{
	const int MAX = 1000;
	int V[MAX], numero, i, n, residuo, UtilV;
	
	cout << "Introduzca un n�mero entero ";
	cin >> numero;
	
	n = numero;
	i = 0;
	UtilV = 0;
	
	while(n > 0)
	{
		residuo = n % 2;
	
		if(UtilV < MAX)
		{
			V[i] = residuo;
			UtilV++;
		}
		
		n = n / 2;
		i++;
	}
	
	cout << "El n�mero " << numero << " en binario es ";
	
	for(int j = UtilV - 1; j >= 0; j--)
		cout << V[j];
}
	
