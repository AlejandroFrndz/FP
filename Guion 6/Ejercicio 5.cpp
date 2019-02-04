//Programa que utiliza la Conjetura Fuerte de Goldbach
#include<iostream>
using namespace std;

int main()
{
	int n, p, q;
	bool esprimo1, esprimo2, encontrado = false;
	
	cout << "Introduzca un número par mayor que 2 ";
	cin >> n;
	
	if(n < 2 or n % 2 != 0)
	{
		do
		{
			cout << "El número debe ser par mayor que 2, por favor, introduzca un número válido" << endl;
			cin >> n;
			
		}while(n < 2 or n % 2 != 0);
	}
	
	for(p = 2; p <= n/2 and ! encontrado; p++)
	{
		q = n - p;
		esprimo1 = true;
		
		for(int i = 2; i < p; i++)
		{
			if(p % i == 0)
			{
				esprimo1 = false;
			}
		}
			
		esprimo2 = true;
		
		for(int i = 2; i < q; i++)
		{
			if(q % i == 0)
			{
				esprimo2 = false;
			}
		}
		
		if(esprimo1 and esprimo2)
			encontrado = true;
	}
	
	p--;
	
	if(encontrado)
		cout << endl << n << " = " << p << " + " << n - p << endl;
		
	else
		cout << "La conjetura está equivocada" << endl;
}
