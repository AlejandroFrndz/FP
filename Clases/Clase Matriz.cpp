//Programa que lea dos matrices y muestre por pantalla su producto
#include<iostream>
using namespace std;

int main()
{
	mimatriz m1(50), m2(50), mp(50);
	secuencia_int s;
	
	//Leer n filas
	
	for(int i = 0; i < nfilas; i++)
	{
		//leer s (1 for con s.Aniade)
		
		m1.Aniade(s);
		
		s.BorrarTodos();
	}
