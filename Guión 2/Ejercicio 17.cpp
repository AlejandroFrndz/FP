//Programa que lee un número de 3 digitos e imprime en pantalla los 3 digitos separados por espacios en blanco
#include<iostream>
using namespace std;

int main()
{
	int numero, digito1, digito2, digito3;
	
	//Lectura del número entero
	cout << "Introduzca un número entero de 3 dígitos: ";
	cin >> numero;
	
	//Proceso: descomposición del número en sus 3 dígitos
	digito1 = numero / 100;
	digito2 = (numero / 10) % 10;
	digito3= numero % 10;
	
	//Imprimir el resultado
	cout << endl << digito1 << "   " << digito2 << "   " << digito3 << "   " << endl;
}
