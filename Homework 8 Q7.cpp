/*a program to find the factorial of a number using pointers. */

#include<conio.h>
#include<iostream>
using namespace std;


void factorial(int, int*);
	

int main(){
	int userInput;
	int fact;
	
	cout<<"Enter a number: ";
	cin>>userInput;
	
	factorial(userInput, &fact);
	cout<<"Factorial: "<<fact;
	getch();
	
	return 0;
}

void factorial(int userInput, int* fact){
	
	*fact=1;
	for(int i=1;i<=userInput;i++){
		*fact=*fact*i;
	}
	
	
}
