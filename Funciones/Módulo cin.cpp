//Módulo que devuelve un entero positivo leido desde teclado
#include<iostream>
using namespace std;

int Echo()
{
	int n;
	
	do{
		cout << "Introduce un número entero postivio ";
		cin >> n;
	}while(n < 0);
	
	return(n);
}

int main()
{	
	int suma = Echo() + Echo();
	
	cout << suma << endl;
}
