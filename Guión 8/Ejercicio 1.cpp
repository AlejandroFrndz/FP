//Programa que lee un vector y lo ordena seg�n el m�todo de la burbuja. Posteriormente, busca un elemento mediante la b�squeda binaria
#include<iostream>
using namespace std;

int main()
{
	const int MAX = 1000;
	int V[MAX], UtilV, tmp, n, left, right, center;
	bool encontrado;
	
	cout << "Introduzca el tama�o del vector ";
	cin >> UtilV;
	
	if(UtilV > MAX || UtilV < 0)
	{
		do{
			cout << "El tama�o del vector no puede superar las " << MAX << " unidades ni ser inferior a 0. Por favor, introduzca un tama�o v�lido ";
			cin >> UtilV;
			
		}while(UtilV > MAX || UtilV < 0);
	}
	
	cout << "Introduzca el vector" << endl;
	
	for(int i = 0; i < UtilV; i++)
		cin >> V[i];
		
	for(int izqda = 0; izqda < UtilV; izqda++)
	{
		for(int i = UtilV - 1; i > izqda; i--)
		{
			if(V[i] < V[i-1])
			{
				tmp = V[i];
				V[i] = V[i-1];
				V[i-1] = tmp;
			}
		}
	}
	
	cout << "\nIntroduzca el n�mero que desea buscar en el vector ";
	cin >> n;
	
	left = 0;
	right = UtilV;
	encontrado = false;
	
	while(left < right && ! encontrado)
	{
		center = (left + right) / 2;
		
		if(V[center] == n)
			encontrado = true;
		
		if(V[center] > n)
			left = center + 1;
		
		else
			right = center - 1;
	}
	
	if(encontrado)
		cout << "\nEl n�mero " << n << " est� en el vector" << endl;
	
	else
		cout << "\nEl n�mero " << n << " no est� en el vector" << endl;
}
