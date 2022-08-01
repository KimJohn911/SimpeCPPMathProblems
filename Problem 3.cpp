#include<iostream>		//inout output library
#include<cmath>			//math library

using namespace std;

/*PROBLEM 3:	The relationship between the sides (a,b) of a right triangle and the hypotenuse (h) 
				is given by the Pythagorean formula a2 + b2 = h2. Write a program that reads in the
				lengths of the two sides of a right triangle and computes the hypotenuse of the triangle.
*/

int main(){
//decleration of variable
	float a,b,h;

//get the length of sides
	cout<<"Enter length a: ";
	cin>>a;
	cout<<"Enter length b: ";
	cin>>b;

//formula
	h=pow(a,2)+pow(b,2);
	h= sqrt(h);
	
//dispay results
	cout<<"\nThe Hypotenuse of "<<a<<" and "<<b<<" is "<< h;
	
	return 0;
	system("pause");
}
