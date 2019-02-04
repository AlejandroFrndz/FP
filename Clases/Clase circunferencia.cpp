//Clase para definir circunferencias. Programa que lee 1000 circunferencias y muestra la que tiene mayor área
#include<iostream>
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
		
		double AbscisaCentro()
		{
			return centro_x;
		}
		
		double OrdenadaCentro()
		{
			return centro_y;
		}
		
		double Radio()
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
};
	
int main()
{
	Circunferencia C, Cmax;
	double x, y, radio;
	
	Cmax.SetRadio(0.0);
	
	cout << "Introduzca el centro (coordenada X, coordenada Y) y después el centro de cada circunferencia" << endl;
	
	for(int i = 0; i < 3; i++)
	{
		cout << "Centro:" << endl;
		cin >> x >> y;
		cout << "Radio:" << endl;
		cin >> radio;	
		
		C.SetCentro(x,y);
		C.SetRadio(radio);
		
		if(C.Area() > Cmax.Area())
			Cmax = C;
	}
	
	cout << "La circunferencia de mayor área es la de centro (" << Cmax.AbscisaCentro() << "," << Cmax.OrdenadaCentro() << ") y radio " << Cmax.Radio() << endl;
}
