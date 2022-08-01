#include<iostream>
#include<cmath>

using namespace std;

float circle (float r, float circumference){
	
	circumference = 2*r*3.14;
	return circumference;	
}

int main(){
	float r;
	
	cout<<"Input radius: ";
	cin>>r;
	cout<<"Circumference: "<<circle(r,0);
	
	return 0;
}
