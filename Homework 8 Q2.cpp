/*a program to print the address of the pointer to a variable whose value is input from user*/

#include<iostream>
using namespace std;
int main(){


	int x;
	cout<<"Enter a number: ";
	cin>>x;
	
	int *xptr=&x;
	int **newXptr = &xptr;
	
	cout<<"The address of the pointer: "<<newXptr<<endl;

	
	
	return 0;
}
