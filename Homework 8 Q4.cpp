/*a program to print a number which is entered from keyboard using pointer.*/

#include<iostream>
using namespace std;
int main(){

	int x;
	cout<<"Enter a number: ";
	cin>>x;
	
	int *xptr=&x;
	
	cout<<"Address of the number: "<<*xptr<<endl;
	

	
	
	return 0;
}
