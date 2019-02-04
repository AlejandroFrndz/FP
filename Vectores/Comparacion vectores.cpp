//Programa que lee dos vectores y determina si son iguales o no
#include<iostream>
using namespace std;

int main()
{
	bool son_iguales = true;
	const int MAX = 1000;
	int V[MAX], U[MAX], utilV, utilU, j;
	
	cout << "Introduce el tamaño del primer vector ";
	
	do{
		
		cin >> utilV;
		
	}while(utilV < 0 or utilV > MAX);
	
	cout << "Introduce el tamaño del segundo vector ";
	
	do{
		
		cin >> utilU;
		
	}while(utilU < 0 or utilU > MAX);
	
	if(utilV == utilU)
	{
		
		cout << "Introduce el primer vector" << endl;
	
		for(int i = 0; i < utilV; i++)
			cin >> V[i];
	
		cout << "Introduce el segundo vector" << endl;
	
		for(int i = 0; i < utilU; i++)
			cin >> U[i];
	
		j = 0;
		
		while(son_iguales and j < utilV)
		{
			if(V[j] != U[j])
				son_iguales = false;
		
			else
				j++;
		}
		
		if(son_iguales)
			cout << "Ambos vectores son iguales" << endl;
			
		else
			cout << "Los vectores no son iguales" << endl;
	}
	
	else
		cout << "Los vectores no son iguales" << endl;
}
	
	
