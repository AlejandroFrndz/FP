//Programa que lee la media y la desviaci�n tipica para, mediante la ecuaci�n gausiana, imprimir la imagen de un real introducido por el usuario
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double media, desviacion, real, imagen;
	
	cout << "Introduzca la media y la desviaci�n t�pica a aplicar en ese orden" << endl;
	cin >> media >> desviacion;
	cout << "\nIntroduzca el real al que se le calcular� la imagen ";
	cin >> real;
	
	//Proceso: Calcular al imagen real seg�n la ecuaci�n gausiana
	imagen = (1.0 / (desviacion * sqrt(2.0 * 3.14159))) * exp(-1.0/2.0 * pow((real - media) / desviacion,2.0));
	
	//Imprimir el resultado
	cout << "\nLa imagen del n�mero introducido es " << imagen << endl;
}
