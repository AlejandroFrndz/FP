//Programa que calcula a/b y a%b sin utilizar las operaciones / ni %
#include<iostream>
using namespace std;

int main()
{
	int resto, divisor, numero, cociente;
	
	cout << "Introduce el dividendo ";
	cin >> numero;
	cout << "Introduce el divisor ";
	cin >> divisor;
	
	resto = numero;
	cociente = 0;
	
	while(resto >= divisor)
	{
		resto = resto - divisor;
		cociente++;
	}
	
	cout << "El cociente de la división es " << cociente << " y el resto " << resto << endl;
}
