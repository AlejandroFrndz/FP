//Programa que inserta un entero n en un vector v ordenado de manera creciente de forma que el vector contin�a estando ordenado
#include<iostream>
using namespace std;

int main()
{
	int const MAX = 1000;
	int V[MAX], UtilV, tmp, movimiento, n;
	bool menor;
	
	cout << "Introduzca el tama�o del vector ";
	cin >> UtilV;
	
	if(UtilV > MAX || UtilV < 0)
	{
		do{
			cout << "El tama�o del vector no puede superar los " << MAX << " elementos ni ser menor que 0. Por favor, introduzca un tama�o v�lido";
			cin >> UtilV;
			
		}while(UtilV > MAX || UtilV < 0);
	}
	
	cout << "Introduzca el vector" << endl;
	
	for(int i = 0; i < UtilV; i++)
		cin >> V[i];
	
	for(int izqda = 0; izqda < UtilV; izqda++)
	{
		for(int i = UtilV - 1; i > izqda; i--)
		{
			if(V[i] < V[i-1])
			{
				tmp = V[i];
				V[i] = V[i-1];
				V[i-1] = tmp;
			}
		}
	}
	
	cout << "Introduzca el n�mero que desea incluir en el vector ";
	cin >> n;
	cout << endl;
	
	menor = true;
	
	for(int i = 0; i < UtilV && menor; i++)
	{
		if(V[i] > n)
		{
			menor = false;
			movimiento = i;
		}
	}
	
	if(MAX == UtilV)
		UtilV--;
	
	for(int i = UtilV - 1; i >= movimiento; i--)
		V[i+1] = V[i];
	
	V[movimiento] = n;
	UtilV++;
	
	cout << "El vector resultante es:" << endl;
	
	for(int i = 0; i < UtilV; i++)
		cout << V[i] << " ";
	
	cout << endl;
}
