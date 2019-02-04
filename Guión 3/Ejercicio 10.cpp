//Programa que lee dos números reales y muestra un menú que permite sumar, restar, dividir o multiplicar ambos números
#include<iostream>
using namespace std;

int main()
{
	double numero1, numero2, resultado;
	char seleccion;
	bool validez = false,
		  division = true;
	
	cout << "Introduzca dos números separados por espacios" << endl;
	cin >> numero1 >> numero2;
	cout << endl << "¿Qué desea hacer?" << endl << "Escriba S para sumar" << endl << "R para restar" << endl << "M para multiplicar" << endl << "O D para dividir" << endl << endl;
	cin >> seleccion;
	
	if(seleccion == 83 or seleccion == 115)
	{
		resultado = numero1 + numero2;
		
		validez = true;
	}
	
	if(seleccion == 82 or seleccion == 114)
	{
		resultado = numero1 - numero2;
		
		validez = true;
	}
	
	if(seleccion == 77 or seleccion == 109)
	{
		resultado = numero1  * numero2;
		
		validez = true;
	}
	
	if(seleccion == 68 or seleccion == 100)
	{
		if(numero2 !=0)
		{
			resultado = numero1 / numero2;
		
			validez = true;
		}
		
		else
		{
			division = false;
		}
	}
	
	if(validez == true)
	{
		cout << "\nEl resultado de la operación es " << resultado << endl;
	}
	
	else
	{
		if(division == true)
		{
			cout << "\nPor favor, seleccione una operación valida" << endl;
		}
		
		else
		{
			cout << "\nNo se puede dividir por 0" << endl;
		}
	}
}
