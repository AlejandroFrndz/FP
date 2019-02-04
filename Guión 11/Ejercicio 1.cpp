//Clase Polinomio2G
#include<iostream>
#include<cmath>
using namespace std;

class Polinomio2G
{
	private:
		double lid;
		double coef;
		double ind;
		
	public:
		
		Polinomio2G()
		:lid(1),
		 coef(1),
		 ind(1)
		{}
		
		Polinomio2G(double x, double y, double z)
		:lid(x),
		 coef(y),
		 ind(z)
		{}
		
		double GetLider()
		{
			return lid;
		}
		
		double GetCoeficiente()
		{
			return coef;
		}
		
		double GetTermino()
		{
			return ind;
		}
		
		void SetLider(double n)
		{
			lid = n;
		}
		
		void SetCoeficiente(double n)
		{
			coef = n;
		}
		
		void SetTermino(double n)
		{
			ind = n;
		}
		
		Polinomio2G Suma(Polinomio2G p)
		{
			Polinomio2G suma;
			double n;
			
			n = lid + p.lid;
			
			suma.SetLider(n);
			
			n = coef + p.coef;
			
			suma.SetCoeficiente(n);
			
			n = ind + p.ind;
			
			suma.SetTermino(n);
			
			return suma;
		}
		
		void ProductoReal(double n)
		{
			double x;
			
			x = n * lid;
			
			SetLider(x);
			
			x = n * coef;
			
			SetCoeficiente(x);
			
			x = n * ind;
			
			SetTermino(x);
		}
		
		double Solucion()
		{
			double radicando, sol;
			
			radicando = pow(coef,2) - 4 * lid * ind;
			
			if(radicando < 0)
				return 12345;
			

			sol = (-coef + sqrt(radicando)) / 2*lid;
				
			return sol;
		
		}
};
	
int main()
	{
		Polinomio2G p(1, 1, 1), q(5, 6, 1), suma;
		double sol;
		
		suma = p.Suma(q);
		
		p.ProductoReal(2);
		
		sol = q.Solucion();
		
		cout << "La suma de p y q es " << suma.GetLider() << "x^2 + " << suma.GetCoeficiente() << "x + " << suma.GetTermino() << endl;
		
		cout << "2 * p = " << p.GetLider() << "x^2 + " << p.GetCoeficiente() << "x + " << p.GetTermino() << endl;
		
		cout << "La solución negativa de q es " << sol << endl;
	}
