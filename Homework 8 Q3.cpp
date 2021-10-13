/*a program to print the value of the address of the pointer to a variable whose 
value is input from user. */

#include<iostream>
using namespace std;
int main(){

int x;
	cout<<"Enter a number: ";
	cin>>x;
	
	int *xptr=&x;

	
	cout<<"The value of the address of the pointer whose value is input from user: "<<*xptr;

	
	
	return 0;
}
