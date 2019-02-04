//Programa que lee un valor de intensidad y resistencia e imprime un valor de voltaje
#include<iostream>
using namespace std;

int main ()
{
	double intensidad, resistencia, voltaje;
	
	//Leer el valor de la intensidad
	cout << "Introduzca el valor de la resistencia: ";
	cin >> intensidad;
	
	//Leer el valor de la resistencia
	cout << "Introduzca el valor de la intensidad: ";
	cin >> resistencia;
	
	//Proceso: Calcular el valor del voltaje
	voltaje = intensidad * resistencia;
	
	//Imprimir el resultado obtenido
	cout << "\nEl voltaje del circuito es de " << voltaje << "V" << endl;
}
