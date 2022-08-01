#include<iostream>		//input output library


using namespace std;

//PROBLEM 6:		Write a program that will find the larger of two numbers input by user.

int main(){
	int a,b;
	
	cout<<"Enter 2 integers in one line seperated by space: ";
	cin>>a>>b;
	
	//conditonal statement
	if (a>b)
		cout<<"\n"<<a<<" is larger than "<<b;
	else
		cout<<"\n"<<b<<" is larger than "<<a;
	return 0;
	system("pause");
}
