//Programa que lee un vector y devuelve otro vector a partir del primero eliminando los n�meros primos
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
	int V[MAX], U[MAX], UtilV, UtilU, j;
	
	cout << "Introduce el tama�o del vector ";
	cin >> UtilV;
	
	if(UtilV < 0 || UtilV > MAX)
	{
		do
		{
			cout << "El tama�o del vector no puede exceder los 1000 elementos o ser inferior a 0. Por favor, introduce un tama�o v�lido ";
			cin >> UtilV;
		}while(UtilV < 0 || UtilV > MAX);
	}
	
	cout << "Introduce los elementos del vector" << endl;
	
	UtilU = 0;
	j = 0;
	
	for(int i = 0; i < UtilV; i++)
	{
		cin >> V[i];
		
		if(! Primo(V[i]))
		{
			U[j] = V[i];
			UtilU++;
			j++;
		}
		
	}
	
	if(UtilU == 0)
		cout << "El vector sin n�meros primos est� vac�o" << endl;
	else
	{
		cout << "El vector introducido sin n�meros primos es:" << endl;
		
		for(int i = 0; i < UtilU; i++)
			cout << U[i] << " ";
	
		cout << endl;
	}
}
