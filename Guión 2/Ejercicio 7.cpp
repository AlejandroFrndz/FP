//Programa que lee dos numeros complejos e imprime el que tiene mayor módulo
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double Preal1, Preal2, Pimaginaria1, Pimaginaria2, modulo1, modulo2;
	
	//Leer las variables de entrada
	cout << "Introduce el primer número complejo, primero la parte real y después la imaginaria " << endl;
	cin >> Preal1 >> Pimaginaria1;
	cout << endl;
	
	cout << "Introduce el segundo número complejo, en el mismo orden que antes " << endl;
	cin >> Preal2 >> Pimaginaria2;
	
	//Proceso: Calcular los módulos de ambos números y determinar cual de ellos es mayor
	modulo1 = sqrt(pow(Preal1,2) + pow(Pimaginaria1,2));
	modulo2 = sqrt(pow(Preal2,2) + pow(Pimaginaria2,2));
	
	if(modulo1 > modulo2)
	{
		cout << "\nEl número " << Preal1 << "+" << Pimaginaria1 << "i tiene mayor módulo" << endl;
	}
	else
	{
		cout << "\nEl número " << Preal2 << " +" << Pimaginaria2 << "i tiene mayor módulo" << endl;
	}
}
