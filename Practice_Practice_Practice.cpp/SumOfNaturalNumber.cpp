//WAP to print sum of natural number.
#include<iostream>
using namespace std;
int main()
{
    int n, i, sum;
    cout<<"Enter the number : ";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        sum=((n*(n+1))/2);   

    }
    cout<<"the sum of"<<n<<" number is :"<<sum<<endl;
    return 0;
}

/* {
    int n,i=1 , sum=0;
    cout<<"Enter the number u want to print the sum:";
    cin>>n;
    while (i<=n)
    {
        sum=sum+i; 
        i++;
    }
    
   cout<<"The sum of n nos is :"<<sum<<endl;
    return 0;
}*/
