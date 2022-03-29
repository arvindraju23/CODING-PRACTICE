//TO FIND NATURE OF ROOTS OF QUADRATIC EQUATION
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c, d,r1,r2;
    cout<<"Enter the the cofficient and constant of quadratic equation:\n";
    cin>>a>>b>>c;
    d=b*b-4*a*c;

    if(d==0)
    {
        cout<<"Roots are real and equal"<<" "<<((-b)/(2*a))<<endl;
    }
    else
    {
        if(d>0)
        {
            cout<<"Roots are real but unequal"<<" "<<(((-b)+(sqrt((b*b)-(4*a*c))))/(2*a))<<" "<<(((-b)-(sqrt((b*b)-(4*a*c))))/(2*a))<<endl;
        }
        else
        {
            cout<<"Roots are imaginary"<<endl;
        }
    }
    return 0;
}