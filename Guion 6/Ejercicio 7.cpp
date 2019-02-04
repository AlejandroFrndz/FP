//Programa que lee enteros hasta introducir el 0 y muestra por pantalla el entero introducido de más cifras
#include<iostream>
using namespace std;

int main()
{
	int x, cifras, x_max, cifras_max;
	
	cout << "Introduce enteros" << endl << "Cuando no desee introducir más números escriba 0" << endl;
	cin >> x;
	
	cifras_max = 0;
	
	while(x != 0)
	{
		cifras = 0;
		
		for(int x_tmp = x; x_tmp > 1; cifras++)
			x_tmp /= 10;
		
		if(cifras > cifras_max)
		{
			cifras_max = cifras;
			x_max = x;
		}
		
		cin >> x;
	}
	
	cout << "\nEl número introducido que mas cifras lo componían es " << x_max;
}
