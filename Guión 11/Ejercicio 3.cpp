//Ejercicio 3
#include<iostream>
using namespace std;

class NumeroTriangular
{		
	public:
		
		int Generar(int n)
		{
			int t;
			
			t = 0;
			
			for(int i = 1; i <= n; i++)
				t += i;
			
			return t;
		}
};

int main()
{
	NumeroTriangular t;
	int n;
	
	cout << "Introduzca el número tope ";
	cin >> n;
	
	for(int i = 1; i < n && t.Generar(i) <= n; i++)
		cout << t.Generar(i) << " ";
	
	cout << endl;
}
