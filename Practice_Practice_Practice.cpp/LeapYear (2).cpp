#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter any year";
    cin>>year;
    if (year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
            
                cout<<"year is a leap year:"<<year<<endl;
                else
                cout<<"not a leap year" <<year<<endl;
        }
           else
                cout<<" a leap year" <<year<<endl;
        }
        
        else
                cout<<"not a leap year" <<year<<endl;
                            
 }