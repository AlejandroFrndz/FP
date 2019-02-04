//Programa que lee dos vectores de reales ordenados y construye un vector unión ordenado
#include<iostream>
using namespace std;

int main()
{
	const int MAX = 1000;
	double V[MAX], U[MAX], Union[MAX];
	int UtilV, UtilU, v, u, UtilUnion;
		
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
	
		v = 0;
		u = 0;
		UtilUnion = 0;
	
		while(v < UtilV && u < UtilU)
		{
			if(V[v] < U[u])
			{
				Union[UtilUnion] = V[v];
				UtilUnion++;
				v++;
			}
		
			else
			{
				Union[UtilUnion] = U[u];
				UtilUnion++;
				u++;
			}
		}
	
		if(v == UtilV)
		{
			for(int k = u; k < UtilU; k++)
			{
				Union[UtilUnion] = U[k];
				UtilUnion++;
			}
		}
	
		else
		{
			for(int k = v; k < UtilV; k++)
			{
				Union[UtilUnion] = V[k];
				UtilUnion++;
			}
		}
		
		cout << "El vector unión de los vectores anteriores es" << endl;
		
		for(int i = 0; i < UtilUnion; i++)
			cout << Union[i] << " ";
	
		cout << endl;
	}
	
	else
	{
		cout << "No es posible construir el vector unión ya que su tamaño superaría el máximo de" << MAX << " elementos por vector" << endl;
	}
}
