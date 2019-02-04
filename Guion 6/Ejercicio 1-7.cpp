//Programa que realiza la figura 7 del ejercicio 1
#include<iostream>
using namespace std;

int main()
{
	for(int x = 1; x <= 7; x++)
	{
		for(int i = 1; x == 1 and i <= 3; i++)
		{
			cout << " ";
			
			for(int j = i; j == 3; j++)
				cout << "*" << endl;
		}
		
		for(int i = 1; x == 2 and i <= 2; i++)
		{
			cout << " ";
			
			for(int j = 1; i == 2 and j <= 3; j++)
				cout << "*";
				
			for(int k = i; k == 2; k++)
				cout << endl;
		}
		
		for(int i = 1; x == 3 and i <= 1; i++)
		{
			cout << " ";
			
			for(int j =1; i == 1 and j <= 5; j++)
				cout << "*";
			
			for(int k = i; k == 1; k++)
				cout << endl;
		}
		
		for(int i = 1; x == 4 and i <= 7; i++)
			cout << "*";
			
		for(int i = 1; x == 4 and i == 1; i++)
			cout << endl;
			
		for(int i = 1; x == 5 and i <= 1; i++)
		{
			cout << " ";
			
			for(int j =1; i == 1 and j <= 5; j++)
				cout << "*";
			
			for(int k = i; k == 1; k++)
				cout << endl;
		}	
		
		for(int i = 1; x == 6 and i <= 2; i++)
		{
			cout << " ";
			
			for(int j = 1; i == 2 and j <= 3; j++)
				cout << "*";
				
			for(int k = i; k == 2; k++)
				cout << endl;
		}
		
		for(int i = 1; x == 7 and i <= 3; i++)
		{
			cout << " ";
			
			for(int j = i; j == 3; j++)
				cout << "*" << endl;
		}
	}
}	
