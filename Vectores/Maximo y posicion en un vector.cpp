//Programa que lea un vector de enteros y muestre por pantalla cual es el mayor y d�nde se encuentra
#include<iostream>
using namespace std;

int main()
{
	const int MAX = 1000;
	int V[MAX], maximo, pmax;
	int utilV;
	
	do{
		
		cout << "Introduce el n�mero de elementos del vector ";
		cin >> utilV;
		
	}while(utilV < 0 or utilV > MAX);
	
	cout << "Introduce los elementos del vector ";
	
	for(int i=0; i < utilV; i++)
		cin >> V[i];
		
	pmax = (0);
		
	for(int i=0; i < utilV; i++)
	{
		if(V[i] > V[pmax])
		{
			pmax = i;
		}
	}
	
	
	cout << "El m�ximo de los elementos introducidos es " << V[pmax] << " que es el elemento introducido n�mero " << pmax << endl;
}
