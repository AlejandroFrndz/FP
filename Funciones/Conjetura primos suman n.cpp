#include<iostream>
using namespace std;

bool Primo(int n)
{
	bool es_Primo = true;
	
	for(int i = 2; i < n && es_Primo; i++)
	{
		if(n % i == 0)
			es_Primo = false;
	}
	
	return(es_Primo);
}

int main()
{
	int n, p;
	bool encontrado;
	
	cout << "Introduce el número ";
	cin >> n;
	
	encontrado = false;
	p = 2;
	
	while(p <= n/2 && ! encontrado)
	{
		if(Primo(p) && Primo(n-p))
			encontrado = true;
		else
			p++;
	}
	
	if(encontrado)
		cout << "La pareja de primos que suman " << n << " son " << p << " y " << n - p << endl;
	else
		cout << "La conjetura es falsa" << endl;
}
