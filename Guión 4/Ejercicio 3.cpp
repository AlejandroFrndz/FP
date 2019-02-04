//Programa que muestra los 1000 primeros múltiplos de 5
#include<iostream>
using namespace std;

int main()
{
	int multiplo, 
	i = 0;
	
	while(i <= 1000)
	{
		multiplo = 5 * i;
		
		cout << multiplo << endl;
		
		i = i + 1;
	}
}
