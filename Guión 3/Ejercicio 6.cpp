//Programa que lee 3 valores y determina si son un triple de pitagoras
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double numero1, numero2, numero3;
	bool pitagoras = false;
	
	cout << "Introduce 3 números separados por espacios ";
	cin >> numero1 >> numero2 >> numero3;
	cout << endl;
	
	if(numero3 > numero1 and numero3 > numero2)
	{
		if((pow(numero1,2) + pow(numero2,2)) == pow(numero3,2))
		{
			pitagoras = true;
		}
	}	
	
	if(numero1 > numero2 and numero1 > numero3)
	{
		if((pow(numero3,2) + pow(numero2,2)) == pow(numero1,2))
		{
			pitagoras = true;
		}
	}	
	
	if(numero2 > numero1 and numero2 > numero3)
	{
		if((pow(numero3,2) + pow(numero1,2)) == pow(numero2,2))
		{
			pitagoras = true;
		}
	}	
	
	if(pitagoras == true)
	{
		cout << numero1 << " " << numero2 << " y " << numero3 << " forman un triple de Pitágoras" << endl;
	}
	
	else
	{
		cout << numero1 << " " << numero2 << " y " << numero3 << " no forman un triple de Pitágoras" << endl;
	}
}
