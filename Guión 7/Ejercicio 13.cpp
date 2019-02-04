//Programa que busca un vector B dentro de un vector A y devuelve, en caso de encontrarlo, la posici�n de comienzo de B en A
#include<iostream>
using namespace std;

int main()
{
	const int MAX = 1000;
	int A[MAX], B[MAX], UtilA, UtilB, comienzo, contador;
	bool sigue;
	
	cout << "Introduzca el tama�o del primer vector ";
	cin >> UtilA;
	
	if(UtilA > MAX || UtilA < 0)
	{
		do
		{
			cout << "El tama�o del vector no puede superar los " << MAX << " elementos ni ser inferior a 0. Por favor, introduzca un tama�o v�lido ";
			cin >> UtilA;
			
		}while(UtilA > MAX || UtilA < 0);
	}
	
	cout << "Introduzca el tama�o del segundo vector ";
	cin >> UtilB;
	
	if(UtilB > MAX || UtilB < 0)
	{
		do
		{
			cout << "El tama�o del vector no puede superar los " << MAX << " elementos ni ser inferior a 0. Por favor, introduzca un tama�o v�lido ";
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
			cout << "El vector B comienza en la posci�n " << comienzo + 1 << " dentro del vector A" << endl;
		
		else
			cout << "El vector B no est� contenido en el vector A" << endl;
	}
	
	else
		cout << "El vector B no est� contenido en el vector A" << endl;
}
