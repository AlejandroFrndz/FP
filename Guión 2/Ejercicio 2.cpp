//Programa que lee 2 n�meros reales y devuelve el mayor de ellos
#include<iostream>
using namespace std;

int main()
{
	double numero1, numero2;
	
	//Leer los datos de entrada
	cout << "Introduce 2 n�meros reales " << endl;
	cin >> numero1 >> numero2;
	
	//Proceso: Determinar cual de los dos es mayor e imprimir el resultado
	if(numero1 > numero2)
   {
		cout << endl << numero1 << " es mayor" << endl;
	}
	
	if(numero1 < numero2)
   {
		cout << endl << numero2 << " es mayor" << endl;
	}
	
	else
   {
		cout << endl << "Ambos n�meros son iguales" << endl;
	}
	
}
