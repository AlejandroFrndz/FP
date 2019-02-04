//Ejercicio 5
#include<iostream>
#include<cmath>
using namespace std;

class NumeroAleatorio
{
	private:
		static const long long a = 16807; 
		static const long long semilla = 123457;
		static const long long  m = 2147483647;
		long long Z;
		
	public:
		
		NumeroAleatorio()
		:Z((a*semilla) % m)
		{}
		
		double Generar()
		{
			double random;
			
			random = Z / pow(2,31);
			
			Z = (a * Z) % m;
			
			return random;	
		}
};

int main()
{
	NumeroAleatorio random;
	
	for(int i = 0; i < 100; i++)
		cout << random.Generar() << " ";
	
	cout << endl;
}
