//Swapping without 3rd variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;

    //swapping without the help of 3rd variable
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping:" "a="<<a <<endl;
    cout<<"After swapping " "b="<<b<<endl;
    cout<<endl;

    

}