#include<iostream>

using namespace std;

int main(){
	
	int integers[10];
	cout<<"Enter 10 postive numbers seperated by space: ";
	
	for(int i=0;i<10;i++){
		cin>>integers[i];	
	}

	cout<<"Reverse: ";
	for(int k=9;k>=0;k--){
		cout<<integers[k]<<" ";	
	}
	return 0;
}
