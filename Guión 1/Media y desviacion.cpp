//Programa que lee 3 reales y calcula la media aritmetica y la desviación atípica
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double real1, real2, real3, media, desviacion;
	
	//Leer los 3 reales
	cout << "Introduzca el primer número ";
	cin >> real1;
	
	cout << "Introduzca el segundo número ";
	cin >> real2;
	
	cout << "Introduzca el tercer número ";
	cin >> real3;
	cout << endl;
	
	//Proceso: Realizar la media aritmetica y la desviación de la misma con los datos introducidos
	media = (real1 + real2 + real3) / 3.0;
	desviacion = sqrt(((real1 - media) * (real1 - media) + (real2 - media) * (real2 - media) + (real3 - media) * (real3 - media)) / 3.0);
	
	//Imprimir resultados
	cout << "La media artimetica es: " << media << endl;
	cout << "La desviación típica es: " << desviacion << endl;
}
