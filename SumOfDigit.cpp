//WAP to print Sum of digit of a number.

#include<iostream>
using namespace std;
int main()
{
    int n,r, sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum +=r;
    }
    cout<<"The sum of digit of number is :" <<sum<<endl;
    return 0;
}