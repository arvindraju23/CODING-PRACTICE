#include<iostream>
using namespace std;
int main()
{
    int num , rem;
    cout<<"Enter any number";
    cin>>num;
    rem=(num%2);
    if(rem==0)
    cout<<"Even number";
    else
    cout<<"Odd number";

}