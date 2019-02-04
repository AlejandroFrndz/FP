//Programa que muestra el en�simo t�rmino de la sucesi�n de Fibonacci
#include<iostream>
using namespace std;

int main()
{
	int n, i, anterior, siguiente_anterior, termino;
	
	cout << "�Qu� termino de la sucesi�n de Fibonacci desea conocer? ";
	cin >> n;
	cout << endl;
	
	if(n == 1 or n == 2)
	{
		cout << "El " << n << " t�rmino de la sucesi�n de Fibonacci es 1" << endl;
	}
	
	else
	{
		anterior = 1;
		termino = 1;
		
		for(i = 3; i <= n; i++)
		{
			siguiente_anterior = termino;
			
			termino = termino + anterior;
			
			anterior = siguiente_anterior;
		}
		
		cout << "El " << n << " t�rmino de la sucesi�n de Fibonacci es " << termino << endl;
	}
}
