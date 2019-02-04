//Programa que lee 3 enteros y los muestra por pantalla ordenados
#include<iostream>
using namespace std;

int main()
{
	int numero1, numero2, numero3;
	
	//Lectura de las variables de entrada
	cout << "Introduce 3 números enteros separados por espacios ";
	cin >> numero1 >> numero2 >> numero3;
	cout << endl;
	
	//Proceso: Determinar el orden de los números y mostrarlos por pantalla ordenados
	if(numero1 >= numero2 and numero1 >= numero3)
	{
		if(numero2 >= numero3)
		{
			cout << numero1 << " " << numero2 << " " << numero3 << endl;
		}
		
		else
		{
			cout << numero1 << " " << numero3 << " " << numero2 << endl;
		}
	}
	
	if(numero2 > numero1 and numero2 >= numero3)
	{
		if(numero1 > numero3)
		{
			cout << numero2 << " " << numero1 << " " << numero3 << endl;
		}
		
		else
		{
			cout << numero2 << " " << numero3 << " " << numero1 << endl;
		}
	}
	
	if(numero3 > numero1 and numero3 > numero2)
	{
		if(numero1 > numero2)
		{
			cout << numero3 << " " << numero1 << " " << numero2 << endl;
		}
		
		if(numero2 > numero1)
		{
			cout << numero3 << " " << numero2 << " " << numero1 << endl;
		}
	}
}
