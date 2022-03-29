//Maximum of three number:
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter any three number:";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"a is greater:"<<a;

    }
    else
    {
        if (b>c)
        {
            cout<<"b is greater:"<<b<<endl;

        }
        else
        {
            cout<<"c is greater:"<<c<<endl;

        }
    }
    return 0;
}