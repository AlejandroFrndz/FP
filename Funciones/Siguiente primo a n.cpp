//Dado un número m mostar el siguiente primo mayor a m
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
	int m, n;
	bool seguir;
	
	cout << "Introduzca un número ";
	cin >> m;
	
	n = m + 1;
	seguir = true;
	
	while(seguir)
	{
		if(Primo(n))
			seguir = false;
		else
			n++;
	}
	
	cout << "El siguiente número primo mayor a " << m << " es " << n << endl;
}
