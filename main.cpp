#include<iostream>
using namespace std;

int add(int, int);
int sub(int, int);
int multi(int, int);
int division(int, int);
int modulo(int, int);
int add(int, int);
int looper(int, int, int);
	
int main() 
{
	int z;
	int a;
	int b;
	looper(a, b, z);
}

int add(int a, int b) {  
	return a + b;  
}
  
int sub(int a, int b) {  
	return a - b;  
}
  
int multi(int a, int b) {  
	return a * b;  
}
  
int division(int a, int b) {  
	return a / b;  
}
  
int modulo(int a, int b) {  
	return a % b;  
}  


int looper(int a, int b, int z) 
{
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
				cout << "an addition of the a & b is: " <<  add(a, b) << endl;
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << endl << endl;
			break;	
			
			case 2:	
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "an substraction of the a - b is: " <<  sub(a, b)<< endl;
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << endl << endl;
			break;	
			
			case 3:	
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "an multiplication of the a * b is: " << multi(a, b) << endl;
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << endl << endl;
			break;	
			
			case 4:	
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "an division of the a / b is: " << division(a, b)<< endl;
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << endl << endl;
			break;	
			
			case 5:	
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "an modulo of the a % b is: " <<  modulo(a, b) << endl;
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << endl << endl;
			break;	
			
			default :
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "Please !! select the valid operation...!!!" << endl;
				cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << endl << endl;

		}
	
	}	while(z != 0);



}
