//Programa que realiza la matriz del ejercicio 4 del guion matrices
#include<iostream>
using namespace std;

int main()
{
	int const MAX = 100;
	int n, x, M[MAX][MAX], f, c, vueltas;
	
	cout << "Introduce la dimensión de la matriz. Esta debe ser impar y mayor que 3" << endl;
	cin >> n;
	
	if(n % 2 == 0 || n < 3)
	{
		do
		{
			cout << "La dimensión de la matriz no puede ser par ni menor que 3. Por favor, introduce una dimensión válida" << endl;
			cin >> n;
			
		}while(n % 2 == 0 || n < 3);
	}
	
	vueltas = 2;
	
	for(int k = 5; k <= n; k++)
	{
		if((k % 2) != 0)
			vueltas++;
	}

	
	x = 1;
	
	for(int v = 0; v < vueltas; v++)
	{
		for(int i = v; i < n-v; i++)
		{
			for(int j = v; j < n-v && i == v; j++)
			{
				M[i][j] = x;
				x++;
			}
		
			if(i > v)
			{
				M[i][n-(v+1)] = x;
				x++;
			}
		}
	
		f = n-(v+1);
		
		for(int j = n-(v+2); j >= v; j--)
		{
			M[f][j] = x;
			x++;
		}
	
		c = v;
	
		for(int i = n-(v+2); i > v; i--)
		{
			M[i][c] = x;
			x++;
		}
	}
		
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(M[i][j] < 10)
				cout << M[i][j] << "  ";
			else
				cout << M[i][j] << " ";
		}
		
		cout << endl;
	}
}
