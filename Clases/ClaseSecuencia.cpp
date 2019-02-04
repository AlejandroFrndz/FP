//Main: Leer vector. Leer elemento. Hacer una búsqueda secuencial del elemento en el vector. Implementar burbuja con la clase
#include <iostream>
using namespace std;

class Secuencia_int{

private:
   static const int TAMANIO = 50;
   int vector_privado[TAMANIO];
   int total_utilizados;
   
public:
   Secuencia_int()
      :total_utilizados(0) {
   }
   
   int TotalUtilizados(){
      return total_utilizados;
   }
   
   int Capacidad(){
      return TAMANIO;
   }
   
   void EliminaTodos(){
      total_utilizados = 0;
   }
   
   void Aniade(int nuevo){
      if (total_utilizados < TAMANIO){
         vector_privado[total_utilizados] = nuevo;
         total_utilizados++;
      }
   }
   
   void Modifica(int posicion, int nuevo){
      if (posicion >= 0 && posicion < total_utilizados)
         vector_privado[posicion] = nuevo;
   }

   int Elemento(int indice){
      return vector_privado[indice];
   }
   

};

int main()
{
	Secuencia_int V;
	int x, tmp;
	bool encontrado;
	
	cout << "Introduzca los elementos del vector, cuando no desee introducir mas elementos, escriba un 0" << endl;
	cin >> x;
		
	while(x != 0)
	{
		V.Aniade(x);
		cin >> x;
	}
	
	cout << "El vector introducido es:" << endl;
	
	for(int i = 0; i<V.TotalUtilizados(); i++)
		cout << V.Elemento(i) << " ";
	
	cout << "\nIntroduzca el elemento que desea buscar en el vector: ";
	cin >> x;
	
	encontrado = false;
	
	for(int i = 0; i < V.TotalUtilizados() && ! encontrado; i++)
	{
		if(x == V.Elemento(i))
			encontrado = true;
	}
	
	if(encontrado)
		cout << x << " está en el vector" << endl;
	else
		cout << x << " no está en el vector" << endl;
	
	for(int izqda = 0; izqda < V.TotalUtilizados(); izqda++)
	{
		for(int i = V.TotalUtilizados() - 1; i > izqda; i--)
		{
			if(V.Elemento(i) < V.Elemento(i-1))
			{
				tmp = V.Elemento(i);
				V.Modifica(i,V.Elemento(i-1));
				V.Modifica(i-1,tmp);
			}
		}
	}
	
	cout << "El vector ordenado es:" << endl;
	
	for(int i = 0; i < V.TotalUtilizados(); i++)
		cout << V.Elemento(i) << " ";
	
	cout << endl;
	
}


 
