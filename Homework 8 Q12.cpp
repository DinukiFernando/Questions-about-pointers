/*a program in C to sort an array using Pointer*/


#include<iostream>
using namespace std;

int sort(int,int*);

int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	int array[num];
	
	for(int i=0;i<num;i++){
		cout<<"Enter "<<i+1<<" number"<<endl;
		cin>>array[i];
	}
	sort(num,array);
	return 0;
}

int sort(int num,int *ptr){
	int t;
	for(int i=0;i<num;i++){
		for(int j=i+1;j<num;j++){
			if(*(ptr+j)<*(ptr+i)){
				t=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=t;
			}
		}
	}
	for(int i=0;i<num;i++){
		cout<<*(ptr+i)<<" ";
	}
}
