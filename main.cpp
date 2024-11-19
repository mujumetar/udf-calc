#include<iostream>
using namespace std;

	int sum(int x, int y, int z)
	{
		
		cout << "an substraction of the b & c is: " <<  x - y << endl;	
		cout << "an multiplication of the b & c is: " <<  x * y << endl;	
		cout << "an division of the b & c is: " <<  x / y << endl;
	}
	
	int add(int a,int b, int c)
	{
		cout << "an addition of the a & b is: " <<  a + b << endl;
	}
	
	int switch(int z) 
	{
		
	}
	
	
int main() 
{
	int z;
	int a;
	int b;
	
		
		do 
	{
	cout << endl << endl;
  
	cout << "enter the first value: ";
	cin >> a;
	cout << "enter the second value: ";
	cin >> b;
	
	
	cout << endl << endl;
	
	cout << "menu :- " << endl;
	cout << "Press 1 for Addition ( + )" << endl;
	cout << "Press 2 for substraction ( - )" << endl;
	cout << "Press 3 for multiplication ( * )" << endl;
	cout << "Press 4 for division ( / )" << endl;
	cout << "Press 5 for modulo ( % )" << endl;
	cout << "Press 0 for close the operation (  )" << endl;

	
	cout << "now please choose the operation: ";
	cin >> z;
	
	cout << endl << endl;
	switch(z) 
		{
			case 1:	
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				// cout << "an addition of the a & b is: " <<  a + b << endl;
				add(int a,int b, int z);
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl << endl;
				
				break;	
			case 2:	
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
			
				cout << "an substraction of the a & b is: " <<  a - b << endl;
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				
				break;	
			case 3:	
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
			
				cout << "an multiplication of the a & b is: " <<  a * b << endl;
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl << endl;
				
				break;	
			case 4:	
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
			
				cout << "an division of the a & b is: " <<  a / b << endl;
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl << endl;
				
				break;	
			case 5:	
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
			
				cout << "an modulo of the a & b is: " <<  a % b << endl;
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl << endl;
				
				break;	
			default :
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
			
				cout << "error" << endl;
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl << endl;
				
		}
													int sum(int x, int y,int z);
	}	while(z != 0);
}
