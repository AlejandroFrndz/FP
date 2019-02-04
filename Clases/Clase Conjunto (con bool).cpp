//Clase: Conjunto (elementos de 1 a 1000)
#include<iostream>
using namespace std;

class Conjunto{
	
	private:
		static const MAX = 1001;
		bool vector_privado[MAX];
	
	public:
		
		Conjunto()
		{
			for(int i = 1; i <= MAX-1; i++)
				vector_privado[i] = false;
		}
		
		int Cardinal()
		{
			int contador = 0;
			
			for(int i = 1; i <= MAX-1; i++)
			{
				if(vector_privado[i])
					contador++;
			}
			
			return contador;
		}
		
		int Aniade(int x)
		{
			if(x >= 1 && x <= MAX-1)
				vector_privado[x] = true;
		}
		
		int Eliminar(int x)
		{
			if( x >= 1 && x <= MAX-1)
				vector_privado[x] = false;
		}
		
		bool Pertenece(int x)
		{
			if(x >= 1 && x <= MAX-1)
				return vector_privado[x];
			
			else
				return false;
		}
		
		Conjunto Union(Conjunto C1)
		{
			Conjunto CU;
			
			for(int i = 1; i <= MAX-1; i++)
				CU.vector_privado[i] = vector_privado[i] || C1.vector_privado[i];
			
			return CU;
		}
		
		Conjunto Interseccion(Conjunto C1)
		{
			Conjunto CI
			
			for(int i = 1; i <= MAX-1; i++)
				CI.vector_privado[i] = vector_privado[i] && C1.vector_privado[i];
			
			return CI;
		}
	}

