//Programa que realiza el triángulo del ejercicio 11
#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Introduce el número de filas del triángulo: ";
	cin >> n;
	cout << endl;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= (n - 1 - i); j++)
			cout << " ";
		
		for(int j = i; j == i; j++)
		{
			for(int k = i; k >= 0; k--)
			{
				if(k >= 10)
				{
					cout << k - 10 * (k / 10);
				}
				else
					cout << k;
			}
				
			for(int k = 1; k <= i; k++)
			{
				if(k >= 10)
				{
					cout << k - 10 * (k / 10);
				}
				else
					cout << k;
			}
		}
		cout << endl;
	}
}

