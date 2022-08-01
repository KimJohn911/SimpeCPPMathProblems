// Ptoblem 8: Write a program to calculate the sum: 1+4+7+...+100

#include<iostream>

using namespace std;

int main(){
	int sum, x=1;
	
	do{
		sum = sum+x;
		x=x+3;
		
	}while(x<=100);
	cout<<"The sum of the series 1 + 4 + 7 + ... + 100 is "<<sum;
	return 0;
	system("pause");
}
