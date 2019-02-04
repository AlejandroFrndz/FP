//Programa que ordena las filas de una matriz en función de la media de sus elementos
#include<iostream>
using namespace std;

int main()
{
	int const MAX = 100;
	int m[MAX][MAX], UtilM_F, UtilM_C, tmpint;
	double V[MAX], tmpd;
	
	cout << "Introduzca el número de filas de la matriz ";
	cin >> UtilM_F;
	
	if(UtilM_F > MAX || UtilM_F <= 0)
	{
		do{
			cout << "La matriz no puede tener mas de  " << MAX << " filas ni menos de 1. Por favor, introduzca un número de filas válido ";
			cin >> UtilM_F;
			
		}while(UtilM_F > MAX || UtilM_F <= 0);
	}
	
	cout << "Introduzca el número de columnas de la matriz ";
	cin >> UtilM_C;
	
	if(UtilM_C > MAX || UtilM_C <= 0)
	{
		do{
			cout << "La matriz no puede tener mas de " << MAX << " columnas ni menos de 1. Por favor, introduzca un número de columnas válido ";
			cin >> UtilM_C;
			
		}while(UtilM_C > MAX || UtilM_C <= 0);
	}
	
	cout << "Introduzca la matriz por filas" << endl;
	
	for(int i = 0; i < UtilM_F; i++)
	{
		for(int j = 0; j < UtilM_C; j++)
		{
			cin >> m[i][j];
		}
	}
	
	for(int f = 0; f < UtilM_F; f++)
	{
		V[f] = 0;
		
		for(int c = 0; c < UtilM_C; c++)
			V[f] += m[f][c];
		
		V[f] /= UtilM_C;
	}
	
	for(int i = 0; i < UtilM_F; i++)
		cout << V[i] << " ";
	
	cout << endl;
	
	for(int izqda = 0; izqda < UtilM_F; izqda++)
	{
		for(int i = UtilM_F - 1; i > izqda; i--)
		{
			if(V[i-1] > V[i])
			{
				tmpd = V[i];
				V[i] = V[i-1];
				V[i-1] = tmpd;
				
				for(int c = 0; c < UtilM_C; c++)
				{
					tmpint = m[i][c];
					m[i][c] = m[i-1][c];
					m[i-1][c] = tmpint;
				}
			}
		}
	}
	
	cout << "La matriz ordenada es:" << endl;
	
	for(int f = 0; f < UtilM_F; f++)
	{
		for(int c = 0; c < UtilM_C; c++)
			cout << m[f][c] << " ";
		
		cout << endl;
	}
}
