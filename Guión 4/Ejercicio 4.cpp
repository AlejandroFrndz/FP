//Programa que determina si un número entero positivo introducido es primo
#include<iostream>
using namespace std;

int main()
{
	int numero, i;
	bool es_primo = true;
	
	
	cout << "Introduzca un número entero positivo ";
	cin >> numero;
	cout << endl;
	
	
	for(i = 2; i < numero and es_primo == true; i++)
	{
			if(numero % i == 0)
			{
				es_primo = false;
			}
	}
	
	
	if(es_primo == true)
	{
		cout << numero << " es primo" << endl;
	}
	
	else
	{
		cout << numero << " no es primo" << endl;
	}
	

}
	
