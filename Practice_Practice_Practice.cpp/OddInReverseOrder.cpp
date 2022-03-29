//Printing odd natural number in reverse order.
#include<iostream>
using namespace std;
int main()
{
    int n, i ;
    cout<<"Enter the Maximum number :";
    cin>>n;
    for(i=n; i>=1; i--)
    {
        if(i%2!=0)
        cout<<i<<endl;
    }
    return 0;
}