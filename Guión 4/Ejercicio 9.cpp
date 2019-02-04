//Programa que lee un n�mero y muestra sus cifras separadas
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long int numero, i, cifra, nuevo_numero;
	bool varias_cifras = true;
	
	cout << "Introduzca un n�mero " << endl;
	cin >> numero;														//El programa lee el n�mero del cual tendr� que separar las cifras
	cout << endl;
	
	if(abs(numero) < 10)							//Si este if determina que el n�mero solo tiene una cifra, la imprime y activa el terminador
	{												//De los cilcos for y while posteriores para que no se ejecuten si no son necesarios
		cout << numero << endl;				
		
		varias_cifras = false;				
	}
	
	if(varias_cifras == true)
	{
	for(i = 1 ; i < (abs(numero) / 10) ; i = i * 10);		//El ciclo for determina el n�mero de cifras del n�mero introducido y ajusta el contador del ciclo while en consecuencia
	}
	
	if(numero < 0)										//Si el n�mero es negativo, se incluye el signo en la divis�n en cifras
	{
		cout << "- ";
	}
	
	nuevo_numero = numero;						//Creamos e inicializamos la variable "nuevo_numero" para no variar el valor de la variable orignal "numero"
	
	while(varias_cifras == true)				//El ciclo while dividir� el n�mero en sus diferentes cifras y las imprimir� en pantalla, deteniendose cuando as� lo indique su terminador
	{
		cifra = abs(nuevo_numero / i);
		
		cout << cifra << " ";
		
		nuevo_numero = numero % i;				//En cada iteraci�n del ciclo, se ajusta el contador "i"
		i = i / 10;
		
		if(i < 0)									//Cuando el contador i sea menor que 0, el n�mero ya habr� sido descompuesto por completo
		{
			varias_cifras = false;				// Por lo que  este if activa el terminador del ciclo, lo cu�l hace que se detenga y finalice el programa
		}
	}
	
	cout << endl;
}
