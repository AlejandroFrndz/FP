//Programa que lee 4 enteros y determina cual de ellos es mayor
#include<iostream>
using namespace std;

int main()
{
	int numero1, numero2, numero3, numero4;
	
	cout << "Introduzca 4 números enteros separados por espacios ";
	cin >> numero1 >> numero2 >> numero3 >> numero4;
	cout << endl;
	
	if(numero1 >= numero2 and numero1 >= numero3 and numero1 > numero4)
	{
		cout << numero1 << " es mayor" << endl;
	}
	
	if(numero2 > numero1 and numero2 >= numero3 and numero2 >= numero4)
	{
		cout << numero2 << " es mayor" << endl;
	}
	
	if(numero3 > numero1 and numero3 > numero2 and numero3 >= numero4)
	{
		cout << numero3 << " es mayor" << endl;
	}
	
	if(numero4 >= numero1 and numero4 > numero2 and numero4 > numero3)
	{
		cout << numero4 << " es mayor" << endl;
	}
	
	if(numero1 == numero2 and numero1 == numero3 and numero1 == numero4)
	{
		cout << "Los 4 números son iguales" << endl;
	}
}
