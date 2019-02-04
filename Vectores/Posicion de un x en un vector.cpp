//Programa que, dados un vector y un x, determina la posición de x en el vector V
#include<iostream>
using namespace std;

int main()
{
	bool encontrado = false;
	const int MAX = 1000;
	int utilV, i, x;
	
	cout << "Introduce el número de elementos del vector "
	i = 0;
	
	while(! encontrado and i < utilV)
	{
		if(x == V[i])
			encontrado = true;
		
		else
			i++;
	}
	
	if(encontrado)
		cout << x << " está en la posición " << i << endl;
	
	else
		cout << x << " no está en el vector" << endl;
		
}
