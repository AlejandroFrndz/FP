//Programa que inserta un entero x en una posicion pos de un vector V
#include<iostream>
using namespace std;

int main()
{
	if(MAX <= utilV)
		cout << "No se puede introducir el elemento ya que el vector ha alcanzado su tamaño máximo";
		
	else
	{
		for(i = utilV - 1; i >= pos; i--)
			V[i + 1] = V[i];
		
		V[pos] = x;
		utilV++;
	}
}
