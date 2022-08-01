#include<iostream>		//inout output library


using namespace std;

//PROBLEM 5:	Write a program that will read in three integers and output a message telling whether exactly two of them are greater than 10.

int main(){
	int a,b,c;
	
	cout<<"Enter three integers in one line seperated by space: ";
	cin>>a>>b>>c;
	
	//cout<<a<<b<<c;
	//conditonal statement
	if (a>10 && b>10 && c<=10)
		cout<<"Exactly two of the integers are greater than 10";
	else if (a>10 && c>10 && b<=10) 
		cout<<"Exactly two of the integers are greater than 10";	
	else if (b>10 && c>10 && a<=10)
		cout<<"Exactly two of the integers are greater than 10";
	else
		cout<<"Not exactly two integers are greater than 10";
	return 0;
	system("pause");
}
