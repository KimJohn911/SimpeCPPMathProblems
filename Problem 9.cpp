// Ptoblem 9: Sum of Harmonic series

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float s = 0.0;
    cout<<"This is a program to calculate the sum of the harmonic series"<<endl;
    cout<<"Input number of terms: ";
    cin>>n;
    for (i = 1; i <= n; i++) 
    {
        if (i < n) 
        {
            s += 1 / (float)i;
        }
        if (i == n) 
        {
            s += 1 / (float)i;
        }
    }
    cout << "\nThe sum of the series upto " << n << " terms: " << s <<endl;
}
