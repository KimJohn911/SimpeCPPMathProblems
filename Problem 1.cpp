#include<iostream>

using namespace std;

//PROBLEM1 : 	Write a program that reads in two integers and then outputs their sum, difference, and product.

int main(){
	//Decleration of Variables
	int int1, int2, sum, difference, product;
	
	//getting the input
	cout<<"Enter the First Integer: ";
	cin>>int1;
	cout<<"Enter the Second Integer: ";
	cin>>int2;
	
	//Formula
	sum= int1+int2;
	difference= int1-int2;
	product = int1*int2;
	
	//Display results;
	cout<<"\nThe Sum of "<<int1<<" and "<<int2<<" is "<<sum<<endl;
	cout<<"The Difference of "<<int1<<" and "<<int2<<" is "<<difference<<endl;
	cout<<"The Product of "<<int1<<" and "<<int2<<" is "<<product<<endl;
	
	return 0;
	system("pause");
}
