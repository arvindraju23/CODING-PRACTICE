#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,r1,r2;
    cout<<"Enter the all three cofficient of quadratic equation: ";
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d==0){
        cout<<"Roots are real & equal "<<endl;
        cout<<"r1=r2="<<(-b)/(2*a)<<endl;
    }
    else if(d>0)
        {
            cout<<"Roots are real and unequal "<<endl;
            cout<<"r1="<<((-b)+(sqrt((b*b)-(4*a*c))))/(2*a)<<endl;
            cout<<"r2="<<((-b)-(sqrt((b*b)-(4*a*c))))/(2*a)<<endl;
        }
    
    else{
        cout<<"Roots are imaginary "<<endl;
    }
    return 0;

}