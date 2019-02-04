//Programa que muestra el enésimo término de la sucesión de Fibonacci
#include<iostream>
using namespace std;

int main()
{
	int n, i, anterior, siguiente_anterior, termino;
	
	cout << "¿Qué termino de la sucesión de Fibonacci desea conocer? ";
	cin >> n;
	cout << endl;
	
	if(n == 1 or n == 2)
	{
		cout << "El " << n << " término de la sucesión de Fibonacci es 1" << endl;
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
		
		cout << "El " << n << " término de la sucesión de Fibonacci es " << termino << endl;
	}
}
