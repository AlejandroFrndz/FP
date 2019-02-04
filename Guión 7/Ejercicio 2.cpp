//Programa que lee un vector de 0 y 1 y muestra la traducción del vector al sistema decimal
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	const int MAX = 1000;
	int V[MAX], UtilV, decimal, n, i, exponente;
	
	cout << "Introduce el número en binario. Cuando haya introducido el número completo, escriba una cifra distinta de 1 o 0" << endl;
	cin >> n;
	
	UtilV = 0;
	i = 0;
	
	while((n == 0 || n == 1) && UtilV < MAX)
	{
		V[i] = n;
		i++;
		UtilV++;
		
		cin >> n;
	}
	
	exponente = UtilV - 1;
	decimal = 0;
	
	for(int j = 0; j < UtilV; j++)
	{
		decimal = decimal + V[j] * pow(2,exponente);
		exponente--;
		cout << decimal << endl;
	}
	
	cout << "El número ";
	
	for(int j = 0; j < UtilV; j++)
		cout << V[j];
		
	cout << " en decimal es " << decimal << endl;
}
