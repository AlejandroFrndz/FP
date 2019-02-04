//Programa que lee una cantidad de horas, minutos y segundos y la reorganiza
#include<iostream>
using namespace std;

int main()
{
	int horas, minutos, segundos, horasfinal, minutosfinal, segundosfinal;
	
	//Leer las variables de entrada
	cout << "Introduzca la cantidad de horas, minutos y segundos en dicho orden " << endl;
	cin >> horas >> minutos >> segundos;
	
	//Proceso: Reorganización de las cantidades
	segundosfinal = segundos % 60;
	minutosfinal = (segundos / 60 + minutos) % 60;
	horasfinal = horas + (segundos / 60 + minutos) / 60;
	
	//Imprimier los resultados
	cout << "\nEl tiempo introducido anteriormente equivale a " << horasfinal << " horas " << minutosfinal << " minutos " << segundosfinal << " segundos"  << endl;
}
