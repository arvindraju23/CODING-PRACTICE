//WAP to print table of given number.

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the table number";
    cin>>n;
    for (i=1; i<=10; i++)
    {
       cout<<n<<" * "<<i<<" = "<<i*n<<endl;
    }
    return 0;
}