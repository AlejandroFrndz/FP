//Programa que lee un vector de enteros y genera otro vector con los elementos del primero sin duplicados
#include<iostream>
using namespace std;

int main()
{
	int const MAX = 1000;
	int V[MAX], VS[MAX];
	int utilV, utilVS, j;
	bool encontrado;
	
	cout << "Introduzca el tamaño del vector ";
	cin >> utilV;
	
	if(utilV > MAX || utilV < 0)
	{
		do{
		cout << "El tamaño del vector no puede ser superior a 1000 ni inferior a 0. Por favor, introduzca un tamaño válido ";
		cin >> utilV;
		}while(utilV < 0 || utilV > MAX);
	}
	
	cout << "Introduzca el vector" << endl;
	
	for(int i = 0; i < utilV; i++)
	{
		cin >> V[i];
	}
	
	utilVS = 0;
	
	for(int i = 0; i < utilV; i++)
	{
		encontrado = false;
		j = 0;
		
		while(j < utilVS && !encontrado)
		{
			if(V[i] == VS[j])
				encontrado = true;
			else
				j++;
		}
		
		if(!encontrado)
		{
			VS[utilVS] = V[i];
			utilVS++;
		}
	}
	
	cout << endl;
	
	for(int i = 0; i < utilVS; i++)
	{
		cout << VS[i] << " ";
	}
	
	cout << endl;
}
