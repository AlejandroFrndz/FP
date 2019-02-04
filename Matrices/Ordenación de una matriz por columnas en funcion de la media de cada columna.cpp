//Programa que ordena las colunmnas de una matriz de menor a mayor en funcion de la media de los elementos de cada columna
#include<iostream>
using namespace std;

int main()
{
	const int MAXF = 100; MAXC = 100;
	int m[MAXF][MAXC], UtilCm, UtilFm, tmpint;
	double V[MAXC], tmpd;
	
	//Lectura con filtro UtilFm y UtilCm
	//Leer con 2 for m
	
	for(int c = 0; c < UtilCm; c++)
	{
		V[c] = 0;
		
		for(int f = 0; f < UtilFm; f++)
			V[c] += m[f][c];
	
		V[c] /= UtilFm;
	}
	
	for(int izq = 0; izq < UtilCm; izq++)
	{
		for(int i = UtilCm - 1; i > izq; i--)
		{
			if(V[i-1] > V[i])
			{
				tmpd = V[i];
				V[i] = V[i-1];
				V[i-1] = tmpd;
				
				for(int f = 0; f < UtilFm; f++)
				{
					tmpint = m[f][i];
					m[f][i] = m[f][i-1];
					m[f][i-1] = tmpint;
				}
			}
		}
	}
	
	//Mostrar la matriz resultante
}
