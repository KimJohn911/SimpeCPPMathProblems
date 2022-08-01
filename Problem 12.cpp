#include<iostream>

using namespace std;

int main(){
	
	int n;
	int n2=1;
	
	cout<<"Input factorial Number (n): ";
	cin>>n;
	
	for(int i=1;i<=n;++i){
		n2=n2*i;
	}
	cout<<"Factorial Result: "<<n2;
}
