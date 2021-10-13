/*a program to find out the greatest and the smallest among three numbers using 
pointers. */

#include<iostream>
using namespace std;

int main(){
	
	int num1,num2,num3;
	
	cout<<"Enter 1 number: "<<endl;
	cin>>num1;
	cout<<"Enter 2 number: "<<endl;
	cin>>num2;
	cout<<"Enter 3 number: "<<endl;
	cin>>num3;
	
	int *num1ptr=&num1;
	int *num2ptr=&num2;
	int *num3ptr=&num3;

	if(*num1ptr>=*num2ptr && *num1ptr>=*num3ptr){
		cout<<"Greatest number is "<<*num1ptr<<endl;	
	}else if(*num2ptr>*num3ptr){
		cout<<"Greatest number is "<<*num2ptr<<endl;
		}else{
			cout<<"Greatest number is "<<*num3ptr<<endl;
}
    
    if(*num1ptr<=*num2ptr && *num1ptr<=*num3ptr){
		cout<<"Smallest number is "<<*num1ptr<<endl;	
	}else if(*num2ptr<*num3ptr){
		cout<<"Smallest number is "<<*num2ptr<<endl;
		}else{
			cout<<"Smallest number is "<<*num3ptr<<endl;
}
	
	return 0;
}
