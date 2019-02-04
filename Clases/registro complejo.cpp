//Programa que lee dos números complejo y los suma
#include<iostream>
using namespace std;

struct Complejo{
	double real;
	double imag;
};

int main()
{
	Complejo C1, C2, suma;
	
	cout << "Introduce la el primer número complejo (Parte real, Parte imaginaria)" << endl;
	cin >> C1.real;
	cin >> C1.imag;
	
	cout << "Introduce el segundo número complejo" << endl;
	cin >> C2.real;
	cin >> C2.imag;
	
	suma.real = C1.real + C2.real;
	suma.imag = C1.imag + C2.imag;
	
	cout << "La suma de ambos números es " << suma.real << " + " << suma.imag << "i" << endl;
}
