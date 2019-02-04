//Ejercicio 2
#include<iostream>
using namespace std;

class Fibonacci
{
	private:
		static const int MAX = 1000;
		int V[MAX];
		int UtilV;
	
	public:
		
		Fibonacci()
		{
			V[0] = 0;
			V[1] = 1;
			UtilV = 2;
		}
		
		void Sucesion(int tope)
		{
			for(int i = UtilV; i < tope && UtilV < MAX; i++)
			{
				V[i] = V[i-1] + V[i-2];
				UtilV++;
			}
		}
		
		void Siguiente()
		{
			if(UtilV < MAX)
			{
				V[UtilV+1] = V[UtilV-1] + V[UtilV-2];
				UtilV++;
			}
		}
		
		int GetTermino(int n)
		{
			return V[n];
		}
		
		int GetTotal()
		{
			return UtilV;
		}
};

int main()
{
	Fibonacci fib;
	int n;
	
	cout << "Introduzca el último termino que desea visualizar ";
	cin >> n;
	
	fib.Sucesion(n);
	
	cout << "La sucesión de Fibonacci hasta el término " << n << " es:" << endl;
	
	for(int i = 0; i < n; i++)
		cout << fib.GetTermino(i) << " ";
	
	cout << "\nEl término " << n+1 << " de la sucesión es: ";
	
	fib.Siguiente();
	
	cout << fib.GetTermino(n+1);
}
