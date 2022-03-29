//Find Simple Interest
#include<iostream>
using namespace std;
int main()
{
    int p, r,t, interest;
    cout<<"Enter the principle amount \n" ;
    cin>>p;
    cout<<"Enter the rate of interest \n";
    cin>>r;
    cout<<"Enter the time period \n";
    cin>>t;
    interest = (p*r*t)/100;
    cout<<"The total Interst is :"<<interest;
    return 0;
    
}