//Programa que calcula los intereses de un capital y devuelve el valor total con los intereses aplicados
#include<iostream>
using namespace std;

int main ()
{
	double capital, interes;						//Declaración de las variables
	
	//Lectura de las variables a introducir
	cout << "Introduzca el capital ingresado: ";	   
	cin >> capital;
	
	cout << "Introduzca el interés aplicable: ";
	cin >> interes;
	
	//Proceso: Cálculo del capital total
	capital = capital + capital * (interes / 100.0);
	
	//Impresión del resultado del proceso
	cout << "\nEl capital disponible transcurrido un año será de " << capital << "€" << endl;
}
