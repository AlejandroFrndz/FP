//Programa que lee 20 letras y determina si la "a" aparece mas veces que la "z" o vicesversa
#include<iostream>
using namespace std;

int main()
{
	char letra;
	int veces_a = 0,
		 veces_z = 0,
		 i=1;
	
	cout << "Introduzca 20 letras" << endl;
	
	while(i<= 20)
	{
		cin >> letra;
		
		if(letra == 65 or letra == 97)
		{
			veces_a = veces_a + 1;
		}
		
		if(letra == 90 or letra == 122)
		{
			veces_z = veces_z + 1;
		}
		
		i = i + 1;
	}
	
	if(veces_a > veces_z)
	{
		cout << "\nLa a aparece más veces que la z" << endl;
	}
	
	else
	{
		if(veces_z > veces_a)
		{
			cout << "\nLa z aparece más veces que la a" << endl;
		}
		
		else
		{
			if(veces_z != 0)
			{
				cout << "\nLa z y la a aparecen el mismo número de veces" << endl;
			}
			
			else
			{
				cout << "\nNi la a ni la z estan entre las 20 letras introducidas" << endl;
			}
		}
	}
}
