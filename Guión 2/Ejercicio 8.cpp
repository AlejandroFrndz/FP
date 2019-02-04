//Programa que lee dos nombres con apellidos y los muestra en pantalla ordenados
#include<iostream>
using namespace std;

int main()
{
	string nombre1, nombre2;
	
	//Leer las variables de entrada
	cout << "Introduce el primer nombre" << endl;
	cin >> nombre1;
	
	cout << "Introduce el segundo nombre" << endl;
	cin >> nombre2;
	
	//Proceso: Determinar el orden alfabetico de los nobres
	if(nombre1 > nombre2)
	{
		cout << nombre2 << endl << nombre1;
	}
	
	else
	{
		cout << nombre1 << endl << nombre2;
	}
}
