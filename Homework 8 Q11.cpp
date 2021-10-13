
/*a program to count the number of vowels and consonants in a string using a 
pointer */

#include<iostream>
using namespace std;

int main(){
	char word[200],*ptr;
	int total=0;
	
	int c1=0;
	int c2=0;
	
	cout<<"Enter a word: ";
	cin>>word;
	
	ptr=word;
	
	while(*ptr !='\0'){
		if(*ptr=='a' || *ptr=='e'|| *ptr=='i' || *ptr=='o' || *ptr=='u' || *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U' || *ptr=='U' ){
			c1++;
		}else{
			c2++;
		}
		ptr++;
	}
	
	cout<<"The number of vowels is "<<c1<<endl;
	cout<<"The number of consonants is "<<c2;




	return 0;
}
