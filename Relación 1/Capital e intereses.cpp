//Programa que calcula los intereses de un capital y devuelve el valor total con los intereses aplicados
#include<iostream>
using namespace std;

int main ()
{
	double capital, interes;						//Declaraci�n de las variables
	
	//Lectura de las variables a introducir
	cout << "Introduzca el capital ingresado: ";	   
	cin >> capital;
	
	cout << "Introduzca el inter�s aplicable: ";
	cin >> interes;
	
	//Proceso: C�lculo del capital total
	capital = capital + capital * (interes / 100.0);
	
	//Impresi�n del resultado del proceso
	cout << "\nEl capital disponible transcurrido un a�o ser� de " << capital << "�" << endl;
}
