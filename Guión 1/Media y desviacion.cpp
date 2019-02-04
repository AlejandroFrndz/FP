//Programa que lee 3 reales y calcula la media aritmetica y la desviaci�n at�pica
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double real1, real2, real3, media, desviacion;
	
	//Leer los 3 reales
	cout << "Introduzca el primer n�mero ";
	cin >> real1;
	
	cout << "Introduzca el segundo n�mero ";
	cin >> real2;
	
	cout << "Introduzca el tercer n�mero ";
	cin >> real3;
	cout << endl;
	
	//Proceso: Realizar la media aritmetica y la desviaci�n de la misma con los datos introducidos
	media = (real1 + real2 + real3) / 3.0;
	desviacion = sqrt(((real1 - media) * (real1 - media) + (real2 - media) * (real2 - media) + (real3 - media) * (real3 - media)) / 3.0);
	
	//Imprimir resultados
	cout << "La media artimetica es: " << media << endl;
	cout << "La desviaci�n t�pica es: " << desviacion << endl;
}
