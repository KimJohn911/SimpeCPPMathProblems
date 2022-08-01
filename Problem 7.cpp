#include<iostream>
#include<cmath>

using namespace std;

void Circle(){
	float r, area;
	cout<<"\nEnter radius of the circle: ";
		cin>>r;
		area=3.14*r*r;
		cout<<"Area= "<<area<<endl<<endl;
		system("pause");
}

void Rectangle(){
	float a,b, area;
	cout<<"\nEnter length and breadth seperated by space: ";
		cin>>a>>b;
		area=a*b;
		cout<<"Area= "<<area<<endl<<endl;
		system("pause");
}

void Triangle(){
	float a,b,c,s, area;
	cout<<"\nEnter three sides of the triangle seperated by space: ";
		cin>>a>>b>>c;
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"Area= "<<area<<endl<<endl;
		system("pause");
}

void Square(){
	float a,area;
	cout<<"\nEnter length of side: ";
		cin>>a;
		area=pow(a,2);
		cout<<"Area= "<<area<<endl<<endl;
		system("pause");
}

int main()
{
int choice;	
do{
system("CLS"); //to clear the screen
cout<<"Menu\n[0] TERMINATE \n[1]Area of circle \n[2]Area of Rectangle \n[3]Area of triangle \n[4] Area of Square \nEnter your choice: ";
cin>>choice;

switch(choice){
	case 1:{
		Circle();
		break;
	}
	case 2:{
		Rectangle();
		break;
	}
	case 3:{
		Triangle();
		break;
	}
	case 4:{
		Square();
		break;
	}
	case 0:{
		cout<<"\nProgram Terminated"<<endl;
		break;
	}
	default:;
	break;	
}

}while(choice != 0);

}


