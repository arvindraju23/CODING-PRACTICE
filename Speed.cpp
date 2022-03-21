#include<iostream>
using namespace std;
int main()
{
    int u,v,a,s;
    cout<<"Enter the intial , final velocity and acceleration:\n";
    cin>>u>>v>>a;
    s=((v*v)-(u*u))/(2*a);
    cout<<"The speed is:"<<s;
    return 0;
}