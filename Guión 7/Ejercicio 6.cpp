//Programa que lee dos vectores de caracteres sin repeticiones y construye un vectro unión y otro interseccion
#include<iostream>
using namespace std;

bool Busqueda(char V[], int Util, char n)
{
	bool encontrado = false;
	
	for(int i = 0; i < Util && ! encontrado; i++)
	{
		if(V[i] == n)
			encontrado = true;
	}
	
	return(encontrado);
}

int main()
{
	int const MAX = 1000;
	int UtilV, UtilU, UtilUnion, UtilInterseccion, a, u;
	char V[MAX], U[MAX], n, Union[MAX], Interseccion[MAX];
	
	cout << "Introduzca el tamaño del primer vector ";
	cin >> UtilV;
	
	if(UtilV > MAX || UtilV < 0)
	{
		do
		{
			cout << "El tamaño del vector no puede exceder de " << MAX << " elementos, ni ser inferior a 0. Por favor, introduzca un tamaño válido ";
			cin >> UtilV;
			
		}while(UtilV > MAX || UtilV < 0);
	}
	
	cout << "Introduzca el tamaño del segundo vector ";
	cin >> UtilU;
	
	if(UtilU > MAX || UtilU < 0)
	{
		do
		{
			cout << "El tamaño del vector no puede exceder de " << MAX << " elementos, ni ser inferior a 0. Por favor, introduzca un tamaño válido ";
			cin >> UtilU;
			
		}while(UtilU > MAX || UtilU < 0);
	}

	cout << "Introduzca el primer vector" << endl;
	
	for(int i = 0; i < UtilV; i++)
	{
		cin >> n;
		
		if(! Busqueda(V, UtilV, n))
			V[i] = n;
		else
		{
			cout << "El vector no puede tener elementos repetidos" << endl;
			i--;
		}
	}
	
	cout << "Introduzca el segundo vector" << endl;
	
	for(int i = 0; i < UtilU; i++)
	{
		cin >> n;
		
		if(! Busqueda(U, UtilU, n))
			U[i] = n;
		else
		{
			cout << "El vector no puede tener elementos repetidos" << endl;
			i--;
		}
	}
	
	UtilUnion = UtilV + UtilU;
	
	if(UtilUnion > MAX)
		cout << "El vector unión excede el tamaño máximo contemplado para vectores (" << MAX << " elementos). Por tanto, no es posible construirlo" << endl;
		
	else
	{
		for(int i = 0; i < UtilV; i++)
			Union[i] = V[i];
		
		u = UtilV;
		
		for(int i = 0; i < UtilU; i++)
		{
			Union[u] = U[i];
			u++;
		}
	}
	
	a = 0;
	UtilInterseccion = 0;
	
	if(UtilV >= UtilU)
	{
		for(int i = 0; i < UtilV; i++)
		{
			if(Busqueda(U, UtilU, V[i]))
			{
				Interseccion[a] = V[i];
				a++;
				UtilInterseccion++;
			}
		}
	}
	
	else
	{
		for(int i= 0; i < UtilU; i++)
		{
			if(Busqueda(V, UtilV, U[i]))
			{
				Interseccion[a] = U[i];
				a++;
				UtilInterseccion++;
			}
		}
	}
			
	cout << endl << "La unión de ambos vectores es:" << endl;
	
	for(int i = 0; i < UtilUnion; i++)
		cout << Union[i] << " ";
		
	cout << endl << endl;
	
	cout << "La intersección de ambos vectores es:" << endl;
	
	for(int i= 0; i < UtilInterseccion; i++)
		cout << Interseccion[i] << " ";
	
	cout << endl;
}
		
