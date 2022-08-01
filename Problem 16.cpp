#include<iostream>
#include<cmath>

using namespace std;

float circle(float R){
	return 3.14*R*R;

}

float square(float R){
	return  pow(R,2);

}

int main (){
	float R;
	cout<<"Enter a Real Number: ";
	cin>> R;
	
	cout<<"Area of a circle: "<<circle(R)<<endl;
	cout<<"Area of a square: "<<square(R)<<endl;
	
	
return 0;
}
