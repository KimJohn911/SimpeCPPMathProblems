#include<iostream>
#include<cmath>
#include<iomanip>
 
using namespace std; 

int main()
{
 
  cout<<setw(15)<<"NUMBER"<<setw(15)<<"SQUARE"<<setw(15)<<"SQUAREROOT"<<setw(15)<<"FOURTH POWER"<<setw(15)<<"FOURTH ROOT"<<endl;
    for(int i=0;i<=25;i++)
    {
        cout<<setw(15)<<i<<setw(15)<<pow(i,2)<<setw(15)<<sqrt(i)<<setw(15)<<pow(i,4)<<setw(15)<<sqrt(sqrt(i))<<endl;
    }
     
    return 0;
}

