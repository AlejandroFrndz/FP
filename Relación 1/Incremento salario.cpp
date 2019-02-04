/*Programa que calcula el incremento del salario base de un trabajador
	Opcion C*/
#include<iostream>
using namespace std;

int main()
{
	double salario_base;
	
	cout << "Introduzca el salario percibido actualmente: ";
	cin >> salario_base;
	
	salario_base = salario_base * 1.02;
	
	cout << "\nEl salario incrementado será de " << salario_base << "€" << endl;
}
