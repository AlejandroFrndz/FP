//Programa que multiplica 2 números siguiendo el método de la multiplicación rusa
#include<iostream>
using namespace std;

int main()
{
	int multiplicador, multiplicando, total, x , y;
	
	cout << "Introudzca el primer factor: ";
	cin >> x;
	cout << "Introduzca el segundo factor: ";
	cin >> y;
	
	multiplicando = x;
	multiplicador = y;
	
	if(multiplicando % 2 != 0)
		total = y;
	else
		total = 0;
	
	while(multiplicando != 1)
	{
		multiplicador *= 2;
		multiplicando /= 2;
		if(multiplicando % 2 != 0)
			total += multiplicador;
	}
	cout << x << " * " << y << " = " << total;
}
