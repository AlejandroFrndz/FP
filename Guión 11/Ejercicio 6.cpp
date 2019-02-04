//Ejercicio 6
#include<iostream>
#include<cmath>
using namespace std;

enum color {verde,rojo};

class Circulo
{
	private:
		double x_centro;
		double y_centro;
		double radio;
		color pintura;
		int puntos;
	
	public:
		Circulo()
		:x_centro(0), y_centro(0), radio(1), pintura(verde), puntos(0)
		{}
		
		void SetCentro(double x, double y)
		{
			x_centro = x;
			y_centro = y;
		}
		
		void SetRadio(double r)
		{
			radio = r;
		}
		
		void CambioColor()
		{
			pintura = rojo;
		}
		
		void Inclusion()
		{
			puntos++;
		}
		
		double GetAbcisa()
		{
			return x_centro;
		}
		
		double GetOrdenada()
		{
			return y_centro;
		}
		
		double GetRadio()
		{
			return radio;
		}
		
		color GetColor()
		{
			return pintura;
		}
		
		int GetPuntos()
		{
			return puntos;
		}
};

int main()
{
	const int MAX=1000;
	Circulo V[MAX];
	int UtilV = 0;
	double r, x, y;
	bool seguir;
	
	cout << "Introduce datos para completar circulos. Cuando no desee introducir más circulos, introduzca un 0 en el radio" << endl;
	
	cout << "Radio: ";
	cin >> r;
	
	if(r < 0)
	{
		do{
			cout << "El radio de un círculo no puede ser negativo. Por favor, introduce un radio válido" << endl;
			cin >> r;
		}while(r < 0);
	}
	
	while(r != 0)
	{
		V[UtilV].SetRadio(r);
		
		cout << "Centro: ";
		cin >> x >> y;
		
		V[UtilV].SetCentro(x, y);
		
		UtilV++;
		
		cout << "Radio: ";
		cin >> r;
	}
	
	cout << "Introduzca puntos. El sistema dejara de requerir puntos cuando todos los círculos previamente introducidos contengan, al menos, 1 punto" << endl;
	
	seguir = true;
	
	while(seguir)
	{
		cout << "Punto: ";
		cin >> x >> y;
		
		for(int i = 0; i < UtilV; i++)
		{
			if((pow((x-V[i].GetAbcisa()),2) + pow((y-V[i].GetOrdenada()),2)) <= pow(V[i].GetRadio(),2))
			{
				V[i].CambioColor();
				V[i].Inclusion();
			}
		}
		
		seguir = false;
		
		for(int i = 0; i < UtilV; i++)
		{
			if(V[i].GetColor() == verde)
			{
				seguir = true;
			}
		}
	}
	
	for(int i = 0; i < UtilV; i++)
	{
		cout << "{" << V[i].GetAbcisa() << "," << V[i].GetOrdenada() << "," << V[i].GetRadio() << "} contiene " << V[i].GetPuntos() << " puntos" << endl;
	}
	
	cout << endl;
}
	
		
	
	
