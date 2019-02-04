//Programa que lee una letra y, si es mayúscula la devuelve minúscula, o viceversa
#include<iostream>
using namespace std;

int main()
{
	char letra, letra_nueva;
	bool es_letra = false;
	
	cout << "Introduzca una letra: ";
	cin >> letra;
	cout << endl;
	
	if(letra >= 65 and letra <= 90)
	{
		letra_nueva = letra + 32;
		
		cout << letra_nueva << " es la minúscula correspondiente" << endl;
		
		es_letra = true;
	}
	
	if(letra >= 97 and letra <= 122)
	{
		letra = letra - 32;
		
		cout << letra << " es la mayúscula correspondiente" << endl;
		
		es_letra = true;
	}
	
	if(es_letra == false)
	{
		cout << "Debe introducir una letra" << endl;
	}
}
