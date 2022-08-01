#include<iostream>		//inout output library
#include<cmath>			//math library

using namespace std;

//PROBLEM 4:	Area of the triangle

int main(){
//decleration of variable:: a, b, c are sides:: A is area
	float a,b,c,S,A;

//get the length of sides
	cout<<"Enter length side a: ";
	cin>>a;
	cout<<"Enter length side b: ";
	cin>>b;
	cout<<"Enter length side c: ";
	cin>>c;

//formula
	S= (a+b+c)/2;
	A=sqrt(S*(S-a)*(S-b)*(S-c)); //Area
	
//dispay results
	cout<<"\nThe Area of the Triangle is "<<A;
	
	return 0;
	system("pause");
}
