//Programa que realiza la figura 5 del ejercicio 1
#include<iostream>
using namespace std;

int main()
{
	for(int x = 1; x <= 6; x++)
	{
		for(int i = 1; (x == 1 or x == 6) and i <= 6; i++)
			cout << "*";
		
		for(int i = 1; (x == 1 or x == 6) and i == x; i++)
			cout << endl;
		
		for(int i = 1; (x != 1 and x != 6) and i == 1; i++)
			cout << "*";
			
		for(int i = 1; (x != 1 and x != 6) and i <= 4; i++)
			cout << " ";
			
		for(int i = 1; (x != 1 and x != 6) and i == 1; i++)
			cout << "*" << endl;
	}
}
