/*a program to reverse the digits a number using pointers.*/

#include<iostream>
using namespace std;
 int main(){
 	
 	int num,rev,r;
 	cout<<"Enter a number: ";
 	cin>>num;
 	
 	int *numPtr=&num;
 	rev=0;
 	
 	while(*numPtr>0){
 		r=*numPtr%10;
 		rev=rev*10 + r;
 		*numPtr=*numPtr/10;
	 }
 	
 	cout<<"Reverse the digits the number: "<<rev;
 	return 0;
 }
