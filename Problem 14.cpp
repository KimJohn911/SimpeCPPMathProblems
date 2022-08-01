#include<iostream>

using namespace std;

int main(){

int count;

for(int x=1;x<100;x++){
	for(int y=1;y<100;y++){
		for(int z=1;z<100;z++){
			int result = 4*x+ 3*y- 9*z;
			if(result ==5){
				cout<<"4("<<x<<") + 3("<<y<<") - 9("<<z<<")= "<<result<<endl;
				count++;
			}
		}
	}
}

cout<<"\n\nTotal Number of integer solutions: "<<count;
return 0;
}
