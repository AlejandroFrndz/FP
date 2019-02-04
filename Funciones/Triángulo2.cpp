#include<iostream>
using namespace std;

void Linea(int n, char c)
{
	for(int i = 1; i <= n; i++)
		cout << c;	
}

int main()
{
	int L;
	
	cout << "Introduzca el número de líneas del triángulo ";
	cin >> L;
	
	for(int i = 1; i <= L; i++)
	{
		Linea(L-i, ' ');
		Linea(i, '*');
		cout << endl;
	}
}
