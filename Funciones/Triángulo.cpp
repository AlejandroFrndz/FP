#include<iostream>
using namespace std;

//Función Void: No devuelve un valor sino que realiza una tarea
void Linea(int n)
{
	for(int i = 1; i <= n; i++)
		cout << "*";
		
	cout << endl;	
}

int main()
{
	int L;
	
	cout << "Introduzca el número de líneas del triángulo ";
	cin >> L;
	
	for(int i = 1; i <= L; i++)
		Linea(i);
}
