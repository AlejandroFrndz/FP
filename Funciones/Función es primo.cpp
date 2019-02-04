//Programa que muestra los números primos menores que un n dado
#include<iostream>
using namespace std;

bool Primo(int n)
{
	bool es_Primo = true;
	
	for(int i = 2; i < n && es_Primo; i++)
	{
		if(n % i == 0)
			es_Primo = false;
	}
	
	return(es_Primo);
}

int main()
{
	int tope;
	
	cout << "Introduzca el número tope ";
	cin >> tope;
	
	cout << "Los números primos menores que " << tope << " son" << endl;
	
	for(int n = 2; n <= tope; n++)
	{
		if(Primo(n))
			cout << n << endl;
	}
}
