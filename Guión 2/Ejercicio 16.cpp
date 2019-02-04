//Programa que lee la media y la desviación tipica para, mediante la ecuación gausiana, imprimir la imagen de un real introducido por el usuario
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double media, desviacion, real, imagen;
	
	cout << "Introduzca la media y la desviación típica a aplicar en ese orden" << endl;
	cin >> media >> desviacion;
	cout << "\nIntroduzca el real al que se le calculará la imagen ";
	cin >> real;
	
	//Proceso: Calcular al imagen real según la ecuación gausiana
	imagen = (1.0 / (desviacion * sqrt(2.0 * 3.14159))) * exp(-1.0/2.0 * pow((real - media) / desviacion,2.0));
	
	//Imprimir el resultado
	cout << "\nLa imagen del número introducido es " << imagen << endl;
}
