//Programa que busca un vector B dentro de un vector A y devuelve, en caso de encontrarlo, la posición de comienzo de B en A
#include<iostream>
using namespace std;

int main()
{
	const int MAX = 1000;
	int A[MAX], B[MAX], UtilA, UtilB, comienzo, contador;
	bool sigue;
	
	cout << "Introduzca el tamaño del primer vector ";
	cin >> UtilA;
	
	if(UtilA > MAX || UtilA < 0)
	{
		do
		{
			cout << "El tamaño del vector no puede superar los " << MAX << " elementos ni ser inferior a 0. Por favor, introduzca un tamaño válido ";
			cin >> UtilA;
			
		}while(UtilA > MAX || UtilA < 0);
	}
	
	cout << "Introduzca el tamaño del segundo vector ";
	cin >> UtilB;
	
	if(UtilB > MAX || UtilB < 0)
	{
		do
		{
			cout << "El tamaño del vector no puede superar los " << MAX << " elementos ni ser inferior a 0. Por favor, introduzca un tamaño válido ";
			cin >> UtilB;
			
		}while(UtilB > MAX || UtilB < 0);
	}
	
	cout << "Introduzca el primer vector" << endl;
	
	for(int i = 0; i < UtilA; i++)
		cin >> A[i];
	
	cout << "Introduzca el segundo vector" << endl;
	
	for(int i = 0; i < UtilB; i++)
		cin >> B[i];
		
	if(UtilB < UtilA)
	{
		sigue = false;
		
		for(int i = 0; i < UtilA && ! sigue; i++)
		{
			comienzo = i;
			sigue = true;
			contador = 0;
			
			for(int j = i; contador < UtilB && sigue; j++)
			{
				if(A[j] != B[contador])
					sigue = false;
			
				contador++;
			}
		}
		
		if(sigue)
			cout << "El vector B comienza en la posción " << comienzo + 1 << " dentro del vector A" << endl;
		
		else
			cout << "El vector B no está contenido en el vector A" << endl;
	}
	
	else
		cout << "El vector B no está contenido en el vector A" << endl;
}
