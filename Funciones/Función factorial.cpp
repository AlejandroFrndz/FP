//Función factorial
#include<iostream>
using namespace std;

int Factorial(int n)
{
	int f = 1;
	
	for(int i = 1; i <= n; i++)
		f = f * i;
		
	return f;
}

int main()
{
	int x, y;
	
	cin >> x;
	
	y = Factorial(x);
	
	cout << y;
}
