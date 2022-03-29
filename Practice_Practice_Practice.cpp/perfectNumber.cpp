//Perfect Number: If sum of factors is doble the original number is called perfect number.

#include<iostream>
using namespace std;
int main()
{
    int i, n, sum=0;
    cout<<"Enter the number";
    cin>>n;
    for (i=1;i<=n; i++)
    {
        if (n%i==0)    //Finding factors of the number.
        {
            sum +=i;
        }
        
    }
    if (sum==2*n)
    {
        cout<<"perfect number";
    }
    else{
        cout<<"not a perfect number";
    }
    
    return 0;
}