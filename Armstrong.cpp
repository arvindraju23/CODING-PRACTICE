//Armstrong Number: If the sum of cubes of digit of the number is equal to original number then the number is called Armstrong number.

#include<iostream>
using namespace std;
int main()
{
    int n,r,m,sum=0;
    cout<<"Enter any number :";
    cin>>n;
    m=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==m)
        cout<<"Armstrong number";
    else
        cout<<"Not a Armstrong Number";
    return 0;
}