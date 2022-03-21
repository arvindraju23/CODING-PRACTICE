#include<iostream>
using namespace std;
int main()
{
    cout<<"Menu Driven"<<endl;
    cout<<"1. Add \n"<<"2.Substract \n"<<"3.Multiplication \n"<<"4.Division \n";
    int option;
    cout<<"Enter Your Choice: ";
    cin>>option;

    int a,b,c;
    cout<<"Enter any two number "<<endl;
    cin>>a>>b;
    switch (option)
    {
    case 1: c=a+b;
        break;
    case 2: c=a-b;
        break;
    case 3: c=a*b;
        break;
    case 4: c=a/b;
        break;
    }
    cout<<"Result is: "<<c<<endl;
    return 0;
}