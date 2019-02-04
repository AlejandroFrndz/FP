//Programa que lee n números enteros y devuelve el que mayor número de cifras tiene
#include<iostream>
using namespace std;

int main()
{
	int n, cifras, cifras_max, ganador;
	
	cout << "Introduzca números enteros. Cuando no desee introducir más números, escriba 0" << endl;
	cin >> n;
	
	cifras = 0;
	cifras_max = 0;
	
	while(n != 0)
	{
		for(int i = 1 ; i <= n; i *= 10)
		{
			cifras++;
		}
		
		if(cifras > cifras_max)
		{
			cifras_max = cifras;
			ganador = n;
		}
		
		cifras = 0;
		
		cin >> n;
	}
	
	cout << "El número introducido con mayor número de cifras es " << ganador << endl;
}
