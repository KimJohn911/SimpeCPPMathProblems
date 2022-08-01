#include <iostream>

using namespace std;
int  main(){
  int n,i,sum,k;
  int mn =1; // 1 is always the initial value and not 0(nuetral number);
  int limit =3;// you can change the value of limit to show more perfect number

  cout<<"The First Three Perfect Numbers : ";
  for(n=mn;k<limit;n++){
    i=1;
    sum = 0;
    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
    }
    if(sum==n){
	
      cout<<n<<" "; 
      k++;
  }
  }
      cout<<"\n";
      
      return 0;
}
