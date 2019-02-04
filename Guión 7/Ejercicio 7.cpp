//Programa que inserta un vector dentro de otro a partir de una posición dada
#include<iostream>
using namespace std;

int main()
{
	int const MAX = 1000;
	int V[MAX], U[MAX], UtilV, UtilU, pos;
	
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
		cout << "Introduzca el primer vector" << endl;
	
		for(int i = 0; i < UtilV; i++)
			cin >> V[i];
	
		cout << "Introduzca el segundo vector" << endl;
		
		for(int i = 0; i < UtilU; i++)
			cin >> U[i];

		cout << "Indique la posición a partir de la cual se quiere insertar U en V ";
		cin >> pos;
		
		for(int i = UtilU - 1; i >= 0; i--)
		{
			for(int j = UtilV -1; j >= pos; j--)
				V[j + 1] = V[j];
			
			V[pos] = U[i];
			UtilV++;
		}
		
		cout << "El vector resultante de la inclusión es:" << endl;
		
		for(int i = 0; i < UtilV; i++)
			cout << V[i] << " ";
	}
	
	else
	{
		cout << "No es posible realizar la inclusión ya que el tamaño del vector resultante superaría el tamaño máximo de los vectores (" << MAX << " unidades)";
	}
}
