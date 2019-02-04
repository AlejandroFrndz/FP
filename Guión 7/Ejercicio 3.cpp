//Programa que lee un vector y devuelve la posicion del mayor n�mero primo contenido en dicho vector
#include<iostream>
using namespace std;

int Primo(int n)
{
	bool es_primo = true;
	
		for(int i = 2; i < n and es_primo == true; i++)
		{
			if(n % i == 0)
				es_primo = false;
		}
	return es_primo;
}
	
int main()
{
	const int MAX = 1000;
	int V[MAX], UtilV, pos;
	bool no_primos;
	
	cout << "Introduzca el tama�o del vector ";
	cin >> UtilV;
	
	if(UtilV > MAX || UtilV < 0)
	{
		do
		{
			cout << "El tama�o del vector no puede exceder los 1000 elementos o ser menor que 0. Por favor, introduzca un tama�o v�lido ";
			cin >> UtilV;
			}while(UtilV > MAX || UtilV < 0);
	}
	
	cout << "Introduzca los elementos del vector" << endl;
	
	pos = -1;
	no_primos = false;
	
	for(int i = 0; i < UtilV; i++)
	{
		cin >> V[i];
		
		if(Primo(V[i]))
			pos = i;
	}
	
	if(pos == -1)
		no_primos = true;
	
	for(int i = 0; i < UtilV && ! no_primos; i++)
	{
		if(Primo(V[i]))
		{
			if(V[i] > V[pos])
				pos = i;
		}
	}
	
	if(no_primos)
		cout << "El vector no contiene ning�n n�mero primo" << endl;
	else
	cout << "El mayor n�mero primo introducido est� en la posici�n " << pos + 1 << endl;
}
