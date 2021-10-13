/*a function which will take pointer and display the number on screen. Take number 
from user and print it on screen using that function. */

#include<iostream>
using namespace std;

void convertInToNumber(int *xptr){
	cout<<"Value of the pointer: "<<*xptr<<endl;
}

int main(){

	int x;
	cout<<"Enter a number: ";
	cin>>x;

	convertInToNumber(&x);
	
	return 0;
}
