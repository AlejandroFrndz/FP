//Programa que calcula el producto de dos matrices de double leidas y lo muestra por pantalla
#include<iostream>
using namespace std;

int main()
{
	//Suponemos las matrices cuadradas
	
	const int MAX = 100;
	double A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
	int n;
	
	//Lectura de n con filtro
	//Lectura (2 for) A y B
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			c[i][j] = 0;
			
			for(int k = 0; k < n; k++)
				c[i][j] += A[i][k] * B[k][j];
			
		}
	}
	
	//Mostrar C
}
