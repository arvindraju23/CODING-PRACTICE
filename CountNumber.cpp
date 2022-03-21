//WAP to count the digit of a number.

#include<iostream>
using namespace std;
int main()
{
    int n,i,r,count=1;
    cout<<"Enter the number :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        r=n%10;
        n=n/10;
        count ++;
    }
    cout<<"The total digit in number is :"<<count<<endl;
    return 0;
}