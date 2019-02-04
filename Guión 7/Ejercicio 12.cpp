//Programa que muestra todos los números primos menores a n por medio de la criba de Erastótenes
#include<iostream>
using namespace std;

int main()
{
	const int MAX = 1000;
	int V[MAX], UtilV, n;
	
	cout << "Introduzca el número tope ";
	cin >> n;
	
	if(n > MAX || n <= 2)
	{
		do
		{
			cout << "El número tope no puede ser mayor que " << MAX << " ni ser inferior o igual a 2. Por favor, introduzca un tope válido ";
			cin >> n;
			
		}while(n > MAX || n <= 2);
	}
	
	UtilV = 0;
	
	for(int i = 2; i <= n; i++)
	{
		V[UtilV] = i;
		UtilV++;
	}
	
	for(int i = 0; i < UtilV; i++)
	{
		for(int j = 0; j < UtilV; j++)
		{
			if(V[j] % V[i] == 0)
			{
				for(int k = j; k < UtilV - 1; k++)
					V[k] = V[k+1];
				
				UtilV--;
			}
		}
	}
	
	cout << "Los números primos menores que " << n << " son:" << endl;
	
	for(int i = 0; i < UtilV; i++)
		cout << V[i] << " ";
	
	cout << endl;
}
