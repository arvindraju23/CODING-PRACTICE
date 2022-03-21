#include<iostream>
using namespace std;
int main()

//find the factors of n
{
    int n, i , sum=0;
    cout<<"Enter the number :";
    cin>>n;
    for (i=1;i <=n; i++)
    {
        if (n%i==0)
        {
           
            cout<<i<<endl;
        }
        
    }
    //sum of all the factors:
     for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            sum +=i;
        }
        
    }
    cout<<"sum of all the factors is "<<sum<<endl;
    return 0;

}