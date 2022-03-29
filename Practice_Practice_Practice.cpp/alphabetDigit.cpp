#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character";
    cin>>ch;
    if(ch>=65 && ch<=90)
    cout<<"An UpperCase Letter";
    else if(ch>=97 && ch<=122)
    cout<<"A LowerCase letter";
    else if(ch>=48 && ch<=57)
    cout<<"Character is a Digit";
    else
    cout<<"special character";
    cout<<endl;
    return 0;

}