#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year ";
    cin>>year;
    if (year%4==0){
        cout<<"Leap Year "<<endl;
    }
    else if (year%100==0 && year%400==0)
    {
        cout<<"Leap Year "<<endl;
    }
    else{
        cout<<"Not a leap year"<<endl;
    }
}