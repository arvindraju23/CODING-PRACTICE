// Sum of Square of natural number.
#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number ";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        sum +=i*i;
    }
     cout<<"The sum of square of number is :"<<sum<<endl;
     return 0;
    
}