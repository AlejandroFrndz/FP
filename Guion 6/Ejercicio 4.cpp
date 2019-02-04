//Programa que muestra la primera pareja de números primos gemelos mayores a un x leido
#include<iostream>
using namespace std;

int main()
{
	int p, q, x;
	bool gemelos, Pprimo, Qprimo;
			
	cout << "Introduce un número entero ";
	cin >> x;
	
	p = x + 1;
	Pprimo = true;
	Qprimo = true;
	gemelos = false;
		
	while(!gemelos)
	{	
		for(int i = 2; i < p && Pprimo; i++)
		{
			if(p % i == 0)
				Pprimo = false;
		}
		
		if(Pprimo)
		{
			q = p + 2;
			
			for(int i = 2; i < q && Qprimo; i++)
			{
				if(q % i == 0)
					Qprimo = false;
			}
			
			if(Qprimo)
				gemelos = true;
		}
		else
			p++;
			
		Pprimo = true;
		Qprimo = true;
	}
	
	cout << "La primera pareja de primos gemelos mayores que " << x << " es " << p << " y " << q << endl;
}
