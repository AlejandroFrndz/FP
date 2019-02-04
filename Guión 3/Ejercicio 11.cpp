//Programa que lee 10 valores reales, calcula su media y determina cuantos elementos la superan
#include<iostream>
using namespace std;

int main()
{
	double numero1, numero2, numero3, numero4, numero5, numero6, numero7, numero8, numero9, numero10, media;
	int superiores = 0;
	
	cout << "Introduzca 10 números separados por espacios ";
	cin >> numero1 >> numero2 >> numero3 >> numero4 >> numero5 >> numero6 >> numero7 >> numero8 >> numero9 >> numero10;
	cout << endl;
	
	media = (numero1 + numero2 + numero3 + numero4 + numero5 + numero6 + numero7 + numero8 + numero9 + numero10) / 10;
	
	if(numero1 > media)
	{
		superiores = superiores + 1;
	}
	
	if(numero2 > media)
	{
		superiores = superiores + 1;
	}
	
	if(numero3 > media)
	{
		superiores = superiores + 1;
	}
	
	if(numero4 > media)
	{
		superiores = superiores + 1;
	}
	
	if(numero5 > media)
	{
		superiores = superiores + 1;
	}
	
	if(numero6 > media)
	{
		superiores = superiores + 1;
	}
	
	if(numero7 > media)
	{
		superiores = superiores + 1;
	}
	
	if(numero8 > media)
	{
		superiores = superiores + 1;
	}
	
	if(numero9 > media)
	{
		superiores = superiores + 1;
	}
	
	if(numero10 > media)
	{
		superiores = superiores + 1;
	}
	
	cout << "La media de los números introducidos es " << media << " \nHay " << superiores << " numeros mayores que la media" << endl;
}
