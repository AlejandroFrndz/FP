//Programa que lee un n�mero real y determina si es par o impar
#include<iostream>
using namespace std;

int main()
{
	int numero;
	bool es_par;
	
	//Leer dato de entrada
	cout << "Introduzca un n�mero ";
	cin >> numero;
	cout << endl;
	
	//Proceso: Determinar si el n�mero introducido es par
	es_par = (numero % 2 == 0);
	
	//Imprimir el resultado obtenido
	if(es_par == true)
	{
		cout << numero << " es par" << endl;
	}
	else
	{
		cout << numero << " es impar" << endl;
	}
}
	
