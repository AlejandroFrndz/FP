//Programa que lee un n�mero real e imprime la parte entera descartando la parte decimal
#include<iostream>
using namespace std;

int main()
{
	double real;
	int entero;
	
	//Leer el n�mero real con parte decimal
	cout << "Introduce el n�mero real ";
	cin >> real;
	
	//Proceso: Desestimar la parte decimal del real introducido
	entero = real / 1;
	
	//Imprimir la parte entera del real
	cout << "\nLa parte entera del n�mero introducido es " << entero << endl;
}
