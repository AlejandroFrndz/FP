//Programa que muestra todos los números pares comprendidos en un intervalo introducido por el usuario
#include<iostream>
using namespace std;

int main()
{
	int cota_inferior, cota_superior, i;
	
	cout << "Introduzca un intervalo ";
	cin >> cota_inferior >> cota_superior;
	cout << endl;
	
	i = cota_inferior;
	
	while(i <= cota_superior)
	{
		if(i % 2 == 0)
		{
			cout << i << " ";
		}
		
		i = i + 1;
	}
	
	if(cota_inferior > cota_superior)
	{
		cout << "Por favor, introduzca un intervalo válido" << endl;
	}
}
	
