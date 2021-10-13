/*a program to store n elements in an array and print the elements using pointer */

#include<iostream>
using namespace std;

int main(){
	
	int data[5];
	cout<<"Enter 5 elements: "<<endl;
	
	for(int i=0;i<5;i++){
		cin>>data[i];	
	}
	
	int *dataPtr=data;
	
	cout<<"You entered: ";
	
	for(int j=0; j<5;j++){
		cout<<endl<<*(dataPtr+j);
	}
	return 0;
}
