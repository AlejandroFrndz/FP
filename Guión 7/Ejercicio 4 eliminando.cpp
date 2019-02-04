//Ejercicio 4 Versión literal
//Programa que lee un vector y devuelve el vector sin números primos
#include<iostream>
using namespace std;

int Primo(int n)
{
	bool es_primo = true;
	
		for(int i = 2; i < n and es_primo == true; i++)
		{
			if(n % i == 0)
				es_primo = false;
		}
	return es_primo;
}

int main()
{
	int const MAX = 1000;
	int V[MAX], UtilV;
	
	cout << "Introduce el tamaño del vector ";
	cin >> UtilV;
	
	if(UtilV < 0 || UtilV > MAX)
	{
		do
		{
			cout << "El tamaño del vector no puede exceder los 1000 elementos o ser inferior a 0. Por favor, introduce un tamaño válido ";
			cin >> UtilV;
		}while(UtilV < 0 || UtilV > MAX);
	}
	
	cout << "Introduce los elementos del vector" << endl;
	
	for(int i = 0; i < UtilV; i++)
		cin >> V[i];
	
	for(int i = 0; i < UtilV; i++)
	{
		if(Primo(V[i]))
		{
			for(; i < UtilV - 1; i++)
			{
				V[i] = V[i-1];
				
				UtilV--;
			}
		}
	}
	
	cout << "El vector sin números primos es" << endl;
	
	for(int i = 0; i < UtilV; i++)
		cout << V[i] << " " << endl;
}
