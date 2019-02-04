//Programa que ordena un vector de forma creciente mediante el método de la baraja
#include<iostream>
using namespace std;

int main()
{
	int const MAX = 1000;
	int V[MAX], Orden[MAX], UtilV, UtilOrden, movimiento;
	bool menor;
	
	cout << "Introduzca el tamaño del vector ";
	cin >> UtilV;
	
	if(UtilV > MAX || UtilV < 0)
	{
		do{
			cout << "El tamaño del vector no puede superar los " << MAX << " elementos ni ser menor que 0. Por favor, introduzca un tamaño válido";
			cin >> UtilV;
			
		}while(UtilV > MAX || UtilV < 0);
	}
	
	cout << "Introduzca el vector" << endl;
	
	for(int i = 0; i < UtilV; i++)
		cin >> V[i];
	
	if(V[0] < V[1])
	{
		Orden[0] = V[0];
		Orden[1] = V[1];
	}
	
	else
	{
		Orden[0] = V[1];
		Orden[1] = V[0];
	}
		
	UtilOrden = UtilV;
	
	for(int j = 2; j < UtilV; j++)
	{	
		menor = true;
		
		for(int i = 0; i < UtilOrden && menor; i++)
		{
			if(Orden[i] > V[j])
			{
				menor = false;
				movimiento = i;
			}
		}
		
		for(int i = UtilOrden - 1; i >= movimiento; i--)
			Orden[i+1] = Orden[i];
		
		Orden[movimiento] = V[j];
	}
	
	cout << "El vector ordenado es:" << endl;
	
	for(int i = 0; i < UtilOrden; i++)
		cout << Orden[i] << " ";
	
	cout << endl;
}
