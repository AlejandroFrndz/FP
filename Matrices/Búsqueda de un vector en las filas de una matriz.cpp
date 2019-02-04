//Programa que lee una matriz de char y un vector de char, y que busca el vector en las filas de la matriz
#include<iostream>
using namespace std;

int main()
{
	int i;
	bool encontrado;
	
	//Lectura con filtro UtilF_M y UtilC_M (igualar UtilC_M y UtilV)
	//Lectura con 2 for para la la matriz M
	//Lectura del vector V
	
	encontrado = false;
	i = 0;
	
	while(i < UtilF_M && ! encontrado)
	{
		iguales = true;
		for(int j = 0; j < UtilC_M; j++)
		{
			if(V[j] != M[i][j])
				iguales = false;
		}
		
		if(iguales)
			encontrado = true;
		else
			i++;
	}
	
	if(encontrado)
		cout << "El vector V esta en la fila " << i << " de la matriz";
	else
		cout << "El vector no está en las filas de la matriz";
}
