//Programa que muestra por pantalla los primeros 50 números abundantes
#include<iostream>
using namespace std;

int main()
{
	int abundancia;
	
	cout << "Los primeros 50 números abundantes son:" << endl;
	
	for(int i = 1; i <= 50; i++)
	{
		abundancia = 0;
		
		for(int j = 1; j < i; j++)
		{
			if(i % j == 0)
			{
				abundancia += j;
			}
		}
		
		if(abundancia > i)
			cout << i << " ";
		}
	}
	
