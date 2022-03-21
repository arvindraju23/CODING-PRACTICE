#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the side of triangle \n";
    cin>>a>>b>>c;

    if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
    {
        cout<<"The triangle is right angled:";
    }
    else{
    cout<<"Not a right angle triangle:";
    }
    return 0;

}