//Programa que lee un n�mero de 3 digitos e imprime en pantalla los 3 digitos separados por espacios en blanco
#include<iostream>
using namespace std;

int main()
{
	int numero, digito1, digito2, digito3;
	
	//Lectura del n�mero entero
	cout << "Introduzca un n�mero entero de 3 d�gitos: ";
	cin >> numero;
	
	//Proceso: descomposici�n del n�mero en sus 3 d�gitos
	digito1 = numero / 100;
	digito2 = (numero / 10) % 10;
	digito3= numero % 10;
	
	//Imprimir el resultado
	cout << endl << digito1 << "   " << digito2 << "   " << digito3 << "   " << endl;
}
