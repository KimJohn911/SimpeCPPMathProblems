#include<iostream>

using namespace std;

/*PROBLEM 2:	A Celsius (centigrade) temperature (C) can be converted to an equivalent Fahrenheit 
				temperature (F) according to the formula  . Write a program that reads in a Celsius
				temperature and then outputs the equivalent Fahrenheit temperature.
*/
int main(){
//Decleration of variables
	float F, C;
	
//get the data of celsius
	cout<<"Input the Celsius Temperature: ";
	cin>>C;
	
//formula
	F= (9*C)/5+32;	
	
//display the result of conversion;
	cout<<"\nThe equivalent Fahrenheit of "<<C<<" degrees celsius is "<<F<<" degrees Fahrenheit";	

	return 0;
	system("pause");
}
