//Programa que realiza el triangulo del ejercicio 12
#include<iostream>
using namespace std;

int main()
{
	int n, linea = 1;
	
	cout << "Introduce el número de filas del árbol: ";
	cin >> n;
	cout << endl;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= (n - 1 - i); j++)
			cout << " ";
		
		for(int j = i; j == i; j++)
		{
			for(int k = i; k <= i; k++)
			{
				if(linea >= 10)
					cout << linea - 10 * (linea / 10);
				else
					cout << linea;
			}
			
			for(int k = i + 2; k < linea * 2 ; k++)
			{
				if(k >= 10)
					cout << k - 10 * (k / 10);
				else
					cout << k;
			}
			
			for(int a = linea * 2 - 2; a >= linea; a--)
			{
				if( a >= 10)
					cout << a - 10 * (a / 10);
				else
					cout << a;
			}
		}
		
		cout << endl;
		linea++;
	}
}
