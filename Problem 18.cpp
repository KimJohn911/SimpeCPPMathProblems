#include<iostream>

using namespace std;

int main(){
	
	int integers[10];
	int sum=0;
	int max, min;
	cout<<"Enter 10 integers seperated by space: ";
	
	for(int i=0;i<10;i++){
		cin>>integers[i];
		
	}
	for(int j=0;j<10;j++){
		sum=sum+integers[j];
	}
	
	max = integers[0];
    for (int k = 0; k < 10; k++)
    {
        if (max < integers[k])
            max = integers[k];
    }
    
    min = integers[0];
    for (int l = 0; l < 10; l++)
    {
        if (min > integers[l])
            min = integers[l];
    }
	float average = sum/10;
	
	cout<<"Average: "<<average<<endl;
	cout<<"Largest Number: "<<max<<endl;
	cout<<"Smallest Number: "<<min<<endl;
	return 0;
}
