#include<iostream>
using namespace std;
int main()
{
    int divisior,dividend,quotient,remainder;
    cout<<"Enter dividend and divisior "<<endl;
    cin>>dividend>>divisior;
    quotient =dividend/divisior;
    remainder=dividend%divisior;
    cout<<"Quotient is "<<quotient<<endl;
    cout<<"Remainder is "<<remainder<<endl;
    return 0;
}