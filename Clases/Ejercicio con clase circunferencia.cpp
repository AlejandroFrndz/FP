//Leer una circunferencia C
//Leer un conjunto de circunferencias hasta introducir una de radio 0
//Mostrar por pantalla las circunferencias del conjunto que están incluidas en la circunferencia C
#include<iostream>
#include<cmath>
using namespace std;

class Circunferencia
{	
	private:
		double centro_x;
		double centro_y;
		double radio;
	
	public:
		void SetCentro(double abscisa, double ordenada)
		{
			centro_x = abscisa;
			centro_y = ordenada;
		}
		
		void SetRadio(double radius)
		{
			if(radius >= 0)
				radio = radius;
			else
				radio = 1;
		}
		
		void Traslada(double horizontal, double vertical)
		{
			centro_x += horizontal;
			centro_y += vertical;
		}
		
		double GetX()
		{
			return centro_x;
		}
		
		double GetY()
		{
			return centro_y;
		}
		
		double GetRadio()
		{
			return radio;
		}
		
		double Longitud()
		{
			double length;
			
			length = 2 * 3.14159 * radio;
			
			return length;
		}
		
		double Area()
		{
			double area;
			
			area = 3.14159 * radio * radio;
			
			return area;
		}
		
		bool Inclusion(Circunferencia C)
		{
			bool incluida;
			double distancia;
			
			distancia = sqrt(pow((GetX() - C.GetX()),2) + pow((GetY() - C.GetY()),2)) + GetRadio();
			
			if(distancia > C.GetRadio())
				incluida = false;
			else
				incluida = true;
			
			return incluida;
		}		
};

int main()
{
	const int MAX = 1000;
	Circunferencia C, A, V[MAX];
	double x, y, radio;
	int UtilV;
	
	cout << "Introduzca el centro de la circunferencia principal " << endl;
	cin >> x >> y;
	
	C.SetCentro(x,y);
	
	cout << "Introduzca el radio de la circunferencia principal ";
	cin >> radio;
	
	C.SetRadio(radio);
	
	cout << "Introduzca el conjunto de circunferencias. Cuando no desee introducir ninguna más, escriba 0 en el radio" << endl;
	cout << "Centro (x,y):" << endl;
	cin >> x >> y;
	
	A.SetCentro(x,y);
	
	cout << "Radio:" << endl;
	cin >> radio;
	
	A.SetRadio(radio);
	
	UtilV = 0;
	
	while(A.GetRadio() != 0)
	{
		if(A.Inclusion(C))
		{
			V[UtilV] = A;
			UtilV++;
		}
		
		cout << "Centro(x,y): " << endl;
		cin >> x >> y;
		
		A.SetCentro(x,y);
		
		cout << "Radio:" << endl;
		cin >> radio;
		
		A.SetRadio(radio);
	}
	
	cout << "Las circunferencias introducidas incluidas en la principal son (x,y,radio):" << endl;
	
	for(int i = 0; i < UtilV; i++)
		cout << V[i].GetX() << "," << V[i].GetY() << "," << V[i].GetRadio() << endl;
	
}
	
