//Programa que lee un vector de caracteres y muestra por pantalla el caracter que mas veces se repite
#include<iostream>
using namespace std;

int main()
{
	int const MAX = 1000;
	char V[MAX], caracter;
	int UtilV, veces, veces_max, k;
	
	cout << "Introduzca el tama�o del vector ";
	cin >> UtilV;
	
	if(UtilV > MAX || UtilV < 0)
	{
		do
		{
			cout << "El tama�o del vector no puede ser superior a " << MAX << " unidades ni ser inferior a 0. Por favor, introduzca un tama�o v�lido";
			cin >> UtilV;
			
		}while(UtilV > MAX || UtilV < 0);
	}
	
	cout << "Introduzca el vector" << endl;
	
	for(int i = 0; i < UtilV; i++)
		cin >> V[i];
	
	veces_max = 0;
	
	for(k = 0; k < UtilV; k++)
	{
		veces = 0;
		
		for(int j = 0; j < UtilV; j++)
		{
			if(V[j] == V[k])
				veces++;
		}
		
		if(veces > veces_max)
		{
			veces_max = veces;
			caracter = V[k];
		}
	}
	
	if(veces > veces_max)
		{
			veces_max = veces;
			caracter = V[k];
		}
		
	cout << "El caracter que m�s veces se repite es " << caracter << endl;
}
