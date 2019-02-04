//Programa que lee una matriz y devuelve el número de columnas no repetidas de la misma
#include<iostream>
using namespace std;

int main()
{
	const int MAX = 100;
	int M[MAX][MAX], UtilCM, UtilFM, contador;
	bool encontrado, repetida;
	
	cout << "Introduzca el número de filas de la matriz ";
	cin >> UtilFM;
	
	if(UtilFM <= 0 || UtilFM > 100)
	{
		do
		{
			cout << "La matriz no puede tener mas de " << MAX << " filas ni 0 o menos. Por favor, introduzca un número de columnas válido ";
			cin >> UtilFM;
		}while(UtilFM <= 0 || UtilFM > 100);
	}
	
	cout << "Introduzca el número de columnas de la matriz ";
	cin >> UtilCM;
	
	if(UtilCM <= 0 || UtilCM > 100)
	{
		do
		{
			cout << "La matriz no puede tener más de " << MAX << " columnas ni 0 o menos. Por favor, introduzca un número de columnas válido ";
			cin >> UtilCM;
		}while(UtilCM <= 0 || UtilCM > 100);
	}
	
	cout << "Introduzca la matriz por filas" << endl;
	
	for(int i = 0; i < UtilFM; i++)
	{
		for(int j = 0; j < UtilCM; j++)
			cin >> M[i][j];
	}
	
	for(int i = 0; i < UtilFM; i++)
	{
		for(int j = 0; j < UtilCM; j++)
			cout << M[i][j] << " ";
		
		cout << endl;
	}
	
	contador = 0;
	
	for(int c = 0; c < UtilCM; c++)
	{
		repetida = false;
	
		for(int j = 0; j < UtilCM; j++)
		{
			encontrado = true;
			
			if(j != c)
			{
				for(int k = 0; k < UtilFM; k++)
				{
					cout << M[k][c] << " y " << M[k][j] << endl;
					
					if(M[k][c] != M[k][j])
					{
						cout << "DISTINTO!!" << endl;
						encontrado = false;
					}
				}
			}	
		}
		
		if(! encontrado)
		{
			contador++;
			cout << "OTRO MÁS!!" << endl;
		}
	}
	
	if(! encontrado)
		contador++;
	
	cout << "Hay " << contador << " columnas únicas en la matriz";
}
