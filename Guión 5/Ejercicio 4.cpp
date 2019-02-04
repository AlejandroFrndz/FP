//Programa que demuestra la conjetura de Collatz
#include<iostream>
using namespace std;

int main()
{
	int actual_n, n;
	
	cout << "Introduzca un número entero positivo mayor que 1 ";
	cin >> n;
	
	if(n <= 1)
	{
		do
		{
			cout << "El número debe ser positivo mayor que 1, por favor, introduzca un número válido ";
			cin >> n;
		}
		while(n <= 0);
	}
	
	cout << endl;
	
	actual_n = n;
	
	while(actual_n != 1)
	{
		if(actual_n % 2 == 0)
		actual_n = actual_n / 2;
		
		else
		actual_n = actual_n * 3 + 1;
		
		cout << actual_n << endl;
	}
	
	cout << "\nSe demuestra la conjetura de Collatz" << endl;
}
