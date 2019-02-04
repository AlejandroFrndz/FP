//Programa que determina si un carácter introducido es una vocal
#include<iostream>
using namespace std;

int main()
{
	char letra;
	bool es_vocal = false;
	
	//Lectura de las variables de entrada
	cout << "Introduce una letra ";
	cin >> letra;
	cout << endl;
	
	//Proceso: Determinar si el caracter introducido es una vocal (mayuscula o minuscula)
	if(letra == 65 or letra == 69 or letra == 73 or letra == 79 or letra == 85 or letra == 97 or letra == 101 or letra == 105 or letra == 111 or letra == 117)
	{
		es_vocal = true;
	}
	
	//Imprimir los resultados obtenidos
	if(es_vocal == true)
	{
		cout << letra << " es una vocal" << endl;
	}
	
	else
	{
		cout << letra << " no es una vocal" << endl;
	}
}
