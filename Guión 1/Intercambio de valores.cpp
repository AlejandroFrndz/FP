//Programa que le asigna un valor a tres variables X, Y y Z y que despues intercambia sus valores
#include<iostream>
using namespace std;

int main ()
{
	double X = 10, Y = 20, Z = 30, temporal1, temporal2;
	
	//Proceso: Intercambia el valor de las variables
	temporal1 = X;
	temporal2 = Y;
	Y = temporal1;
	temporal1 = Z;
	Z = temporal2;
	X = temporal1;
	
	//Imprimimos los valores intercambiados
	cout << "X= " << X << endl;
	cout << "Y= " << Y << endl;
	cout << "Z= " << Z << endl;
}
