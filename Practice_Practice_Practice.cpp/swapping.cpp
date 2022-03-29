//swapping with help of 3rd variable
#include<iostream>
using namespace std;
int main()
{
    int x ,y, z;
    cout<<"Enter the x ";
    cin>>x;
    cout<<"enter the y ";
    cin>>y;
   
    //swapping
    z=x;
    x=y;
    y=z;
    cout<<"swapped value x:"<<x;
    cout<<"swapped value of y :"<<y;
    return 0;


}