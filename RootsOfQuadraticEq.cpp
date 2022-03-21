#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b, c, r1, r2;
    cout<<"Enter the value of cofficient a, b, c\n";
    cin>>a>>b>>c;
    r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    r1=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"The Root of the equation is:"<<r1<<" "<<r2;
    return 0;

}