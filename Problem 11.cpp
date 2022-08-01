// Ptoblem 11: sum of squares

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	char ch;
	do{
	int N, sum=0, x=1;
	system("CLS");
	cout<<"Input N(last term): ";
	cin>>N;
		
		do{
		sum = sum+ pow(x,2);
		x++;
	}while(x<=N);
	
	cout<<"The sum of the squares is "<<sum;
	
	cout<<"\n\nEnter any key to try again otherwise enter [0] to exit: ";
	cin>>ch;
	}while(ch!='0');
}
