
/* a program to Calculate the length of the string using a pointer */

#include<iostream>
using namespace std;

int main(){
	char word[200],*ptr;
	int total=0;
	
	cout<<"Enter a word: ";
	cin>>word;
	
	ptr=word;
	
	while(*ptr !='\0'){
		total++;
		ptr++;
	}
	
	cout<<"The length of the string is "<<total;




	return 0;
}
