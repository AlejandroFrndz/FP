//Programa que lee un número y muestra sus cifras separadas
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long int numero, i, cifra, nuevo_numero;
	bool varias_cifras = true;
	
	cout << "Introduzca un número " << endl;
	cin >> numero;														//El programa lee el número del cual tendrá que separar las cifras
	cout << endl;
	
	if(abs(numero) < 10)							//Si este if determina que el número solo tiene una cifra, la imprime y activa el terminador
	{												//De los cilcos for y while posteriores para que no se ejecuten si no son necesarios
		cout << numero << endl;				
		
		varias_cifras = false;				
	}
	
	if(varias_cifras == true)
	{
	for(i = 1 ; i < (abs(numero) / 10) ; i = i * 10);		//El ciclo for determina el número de cifras del número introducido y ajusta el contador del ciclo while en consecuencia
	}
	
	if(numero < 0)										//Si el número es negativo, se incluye el signo en la divisón en cifras
	{
		cout << "- ";
	}
	
	nuevo_numero = numero;						//Creamos e inicializamos la variable "nuevo_numero" para no variar el valor de la variable orignal "numero"
	
	while(varias_cifras == true)				//El ciclo while dividirá el número en sus diferentes cifras y las imprimirá en pantalla, deteniendose cuando así lo indique su terminador
	{
		cifra = abs(nuevo_numero / i);
		
		cout << cifra << " ";
		
		nuevo_numero = numero % i;				//En cada iteración del ciclo, se ajusta el contador "i"
		i = i / 10;
		
		if(i < 0)									//Cuando el contador i sea menor que 0, el número ya habrá sido descompuesto por completo
		{
			varias_cifras = false;				// Por lo que  este if activa el terminador del ciclo, lo cuál hace que se detenga y finalice el programa
		}
	}
	
	cout << endl;
}
