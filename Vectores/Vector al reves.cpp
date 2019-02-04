//Programa que lee 1 millón de reales, los almacene en un vector y los muestre por pantalla al revés
#include<iostream>
using namespace std;

int main()
{
	const int MAX = 1000000;
	double V[MAX];
	
	for(int i = 0; i < MAX; i++)
	{
		cout << "Introduce un número ";
		cin >> V[i];
	}
	
	cout << endl;
	
	for(int i = MAX - 1; i >= 0; i--)
	{
		cout << V[i] << " ";
	}
	
	cout << endl;
}
