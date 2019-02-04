//Dados dos vectores ordenados, combinarlos para generar otro vector ordenado
#include<iostream>
using namespace std;

int main()
{
	const int MAX = 1000;
	double V[MAX], U[MAX], V3[MAX];
	int UtilV, UtilU, v, u, UtilV3;
	bool creciente, decreciente;
	
	cout << "Introduzca el tamaño del primer vector ";
	cin >> UtilV;
	
	if(UtilV > MAX || UtilV < 0)
	{
		do
		{
			cout << "El tamaño del vector no puede ser superior a " << MAX << " elementos ni ser inferior a 0. Por favor, introduzca un tamaño válido";
			cin >> UtilV;
			
		}while(UtilV > MAX || UtilV < 0);
	}
	
	cout << "Introduzca el tamaño del segundo vector ";
	cin >> UtilU;
	
	if(UtilU > MAX || UtilU < 0)
	{
		do
		{
			cout << "El tamaño del vector no puede ser superior a " << MAX << " elementos ni ser inferior a 0. Por favor, introduzca un tamaño válido";
			cin >> UtilU;
			
		}while(UtilU > MAX || UtilU < 0);
	}
	
	if(UtilV + UtilU < MAX)
	{
		cout << "Introduzca el primer vector ordenado de forma creciente" << endl;
	
		for(int i = 0; i < UtilV; i++)
		{	
			cin >> V[i];
	
				if(V[i-1] >= V[i])
				{
					do
					{
						cout << "El vector debe introducirse ordenadamente" << endl;
						cin >> V[i];
					
					}while(V[i-1] >= V[i]);
				}
		}
	
		cout << "Introduzca el segundo vector ordenado de forma creciente" << endl;
	
		for(int i = 0; i < UtilU; i++)
		{
			cin >> U[i];
		
			if(U[i-1] >= U[i])
			{
				do
				{
					cout << "El vector debe introducirse ordenadamente" << endl;
					cin >> U[i];
					
				}while(U[i-1] >= U[i]);
			}
		}
	}
		
	v = 0;
	u = 0;
	UtilV3 = 0;
	
	while(v < UtilV && u < UtilU)
	{
		if(V[v] < U[u])
		{
			V3[UtilV3] = V[v];
			UtilV3++;
			v++;
		}
		
		else
		{
			V3[UtilV3] = U[u];
			UtilV3++;
			u++;
		}
	}
	
	if(v == UtilV)
	{
		for(int k = u; k < UtilU; k++)
		{
			V3[UtilV3] = U[k];
			UtilV3++;
		}
	}
	
	else
	{
		for(int k = v; k < UtilV; k++)
		{
			V3[UtilV3] = V[k];
			UtilV3++;
		}
	}
	
	for(int k = 0; k < UtilV3; k++)
	{
		cout << V3[k] << " ";
	}
}
	
	
