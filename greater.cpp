#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a,b,c \n";
    cin>>a>>b>>c;
    if((a>=b)&&(a>=c))
    cout<<"a is greater";
    else if((b>=a)&&(b>=c))
    cout<<"b is a greater";
    else
    cout<<"c is greater";
}