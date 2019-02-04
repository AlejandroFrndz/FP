//Programa que lee un vector de caracteres y construye otro nuevo eliminando los caracteres repetidos del primero
#include<iostream>
using namespace std;

int main()
{
	int const MAX = 1000;
	char V[MAX], U[MAX];
	int UtilV, UtilU, j;
	bool encontrado;
	
	cout << "Introduzca el tamaño del vector ";
	cin >> UtilV;
	
	if(UtilV < 0 || UtilV > 1000)
	{
		do
		{
			cout << "El tamaño no puede exceder de " << MAX << " elementos o ser inferior a 0. Por favor, introduzca un tamaño válido ";
			cin >> UtilV;
		}while(UtilV < 0 || UtilV > 1000);
	}
	
	cout << "Introduzca los elementos del vector" << endl;
	
	for(int i = 0; i < UtilV; i++)
		cin >> V[i];
	
	UtilU = 0;
	
	for(int i = 0; i < UtilV; i++)
	{
		encontrado = false;
		j = 0;
		
		while(j < UtilU && ! encontrado)
		{
			if(V[i] == U[j])
				encontrado = true;
			else
				j++;
		}
		
		if(! encontrado)
		{
			U[UtilU] = V[i];
			UtilU++;
		}
	}
	
	cout << "El vector sin caracteres duplicados es" << endl;
	
	for(int i = 0; i < UtilU; i++)
		cout << U[i] << " ";
	
	cout << endl;
}
