//Programa que lee un vector de enteros y genera otro vector con los pares del primero
#include<iostream>
using namespace std;

int main()
{
	const int MAX = 1000;
	int V[MAX], Vpares[MAX];
	int utilV, utilVpares;
	
	cout << "Introduzca el tamaño del vector ";
	cin >> utilV;
	
	if(utilV < 0 || utilV > MAX)
	{
		do{
			cout << "El tamaño del vector no puede ser inferior a 0 ni superior a 1000, por favor introduzca un tamaño válido ";
			cin >> utilV;
			
		}while(utilV < 0 || utilV > MAX);
	}
	
	cout << "Introduzca el vector" << endl;
	
	for(int i = 0; i < utilV; i++)
	{
		cin >> V[i];
	}
	
	utilVpares = 0;
	
	for(int i = 0; i < utilV; i++)
	{
		if(V[i] % 2 == 0)
		{
			Vpares[utilVpares] = V[i];
			utilVpares++;
		}
	}
	
	cout << endl;
	
	for(int i = 0; i < utilVpares; i++)
	{
		cout << Vpares[i] << " ";
	}
	
}
