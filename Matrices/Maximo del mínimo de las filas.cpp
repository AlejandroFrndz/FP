//Programa que lee una matriz de enteros y devuelva el m�ximo de los m�nimos de cada fila
#include<iostream>
using namespace std;

int main()
{
	const int MAX_F = MAX_C = 1000;													//Declaraci�n de la
	int M[MAX_F][MAX_C], UtilF_M, UtilC_M;											//			matriz
	int minimo, maximo;
	
	do{
		cout << "Introduzca el n�mero de filas de la matriz ";
		cin >> UtilF_M;
		
	}while(UtilF_M > MAX_F || UtilF_M <= 0);										//Lectura del tama�o de la matriz
	
	do{
		cout << "Introduzca el n�mero de columnas de la matriz ";
		cin >> UtilC_M;
		
	}while(UtilC_M > MAX_C || UtilC_M <= 0);
	
	for(int i = 0; i < UtilF_M; i++)														//Lectura de los elementos de la matriz
	{
		for(int j = 0; j < UtilC_M; j++)
			cin >> M[i][j];
	}
	
	for(int i = 0; i < UtilF_M; i++)
	{
		minimo= M[i][0];																		//Inicializaci�n de m�nimo
		
		for(int j = 0; j < UtilC_M; j++)
		{
			if(M[i][j] < minimo)
				minimo = M[i][j];																//Determinaci�n del m�nimo de cada fila
			
			if(i == 0)
				maximo = minimo;
			else
			{																						//Determinaci�n del m�ximo de los m�nimos
				if(minimo > maximo)
					maximo = minimo;
			}
		}
	}
	
	cout << "El m�ximo de los m�nimos de cada fila es " << maximo << endl;
}
