//Programa que lee un número real e imprime la parte entera descartando la parte decimal
#include<iostream>
using namespace std;

int main()
{
	double real;
	int entero;
	
	//Leer el número real con parte decimal
	cout << "Introduce el número real ";
	cin >> real;
	
	//Proceso: Desestimar la parte decimal del real introducido
	entero = real / 1;
	
	//Imprimir la parte entera del real
	cout << "\nLa parte entera del número introducido es " << entero << endl;
}
