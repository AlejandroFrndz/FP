#include<iostream>
using namespace std;

int main()
{
	int numero;
	
	cout << "Introduzca un número comprendido en el intervalo [1,1000]";
	cin >> numero;
	
	if(numero < 1 or numero > 1000)
	{
		do{
			
			cout << "El número introducido debe estar en el intervalo [1,1000], por favor introduzca un valor válido";
			cin >> numero;
			
		}while(numero < 1 or numero > 1000);
	}
	
	cout << "Ha introducido el número " << numero;
	
}
