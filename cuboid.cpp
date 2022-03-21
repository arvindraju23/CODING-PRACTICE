#include<iostream>
using namespace std;
int main()
{
    int l, b, h , vol;
    cout<<"Enter the Length of cuboid \n";
    cin>>l;
    cout<<"Enter the breadth of cuboid \n";
    cin>>b;
    cout<<"Enter the height of cuboid \n";
    cin>>h;
    vol=l*b*h;
    cout<<"The volume of cuboid is :" <<vol;
    return 0;
}