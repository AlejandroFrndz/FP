//Programa que lee dos numeros complejos e imprime el que tiene mayor m�dulo
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double Preal1, Preal2, Pimaginaria1, Pimaginaria2, modulo1, modulo2;
	
	//Leer las variables de entrada
	cout << "Introduce el primer n�mero complejo, primero la parte real y despu�s la imaginaria " << endl;
	cin >> Preal1 >> Pimaginaria1;
	cout << endl;
	
	cout << "Introduce el segundo n�mero complejo, en el mismo orden que antes " << endl;
	cin >> Preal2 >> Pimaginaria2;
	
	//Proceso: Calcular los m�dulos de ambos n�meros y determinar cual de ellos es mayor
	modulo1 = sqrt(pow(Preal1,2) + pow(Pimaginaria1,2));
	modulo2 = sqrt(pow(Preal2,2) + pow(Pimaginaria2,2));
	
	if(modulo1 > modulo2)
	{
		cout << "\nEl n�mero " << Preal1 << "+" << Pimaginaria1 << "i tiene mayor m�dulo" << endl;
	}
	else
	{
		cout << "\nEl n�mero " << Preal2 << " +" << Pimaginaria2 << "i tiene mayor m�dulo" << endl;
	}
}
