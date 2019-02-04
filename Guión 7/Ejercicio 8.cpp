//Programa que lee un vector de caracteres y elimina los elementos repetidos
#include<iostream>
using namespace std;

int main()
{
	const int MAX = 1000;
	char V[MAX];
	int UtilV, encontrado;
	
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
	
	for(int i = 0; i < UtilV; i++)
	{
		encontrado = 0;
		
		for(int j = i; j < UtilV && encontrado < 2; j++)
		{
			if(V[j] == V[i])
			{
				encontrado++;
			}
		}
		
		if(encontrado >= 2)
		{
			for(int j = i; j < UtilV - 1; j++)
				V[j] = V[j+1];
			
			UtilV--;
		}
	}
				
	cout << "El vector sin elementos repetidos es:" << endl;
	
	for(int i = 0; i < UtilV; i++)
		cout << V[i] << " ";	
	
	cout << endl;
}
