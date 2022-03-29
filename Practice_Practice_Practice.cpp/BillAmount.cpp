#include<iostream>
using namespace std;
int main()
{
    float a,p,d;
    cout<<"Enter the Amount:";
    cin>>a;
    if(a>=100 && a<500)
    {
        d=(a*10)/100;
        p=a-d;
        cout<<"Discount is Rs:"<<d<<endl;
        cout<<"Discounted Rate is Rs:"<<p<<endl;

    }
    else if (a>=500)
    {
       d=a*20/100;
       p=a-d;
       cout<<"Discount is Rs:"<<d<<endl;
        cout<<"Discounted Rate is Rs:"<<p<<endl;
    }
    else{
        cout<<"No Discout"<<endl;
        cout<<"Amount is Rs:"<<a<<endl;

    }
    return 0;
}