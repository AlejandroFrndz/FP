//Programa que lee un caracter minuscula e imprime su codigo ASCII y su may�scula correspondiente
#include<iostream>
using namespace std;

int main()
{
	char minuscula, mayuscula;
	int codigominus, codigomayus;
	
	//Leer el caracter de entrada
	cout << "Introduzca el caracter en min�scula ";
	cin >> minuscula;
	
	//Proceso: Obtener el codigo ASCII del caracter introducido y el de su may�scula correspondiente
	codigominus = minuscula;
	codigomayus = minuscula - 32;
	mayuscula = codigomayus;
	
	//Imprimir los resultados
	cout << "\nEl codigo ASCII de la letra introducida es " << codigominus;
	cout << "\nLa may�scula del caracter introducido es " << mayuscula << " y su c�digo es " << codigomayus << endl;
}
