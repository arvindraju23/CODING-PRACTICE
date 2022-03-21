#include<iostream>
using namespace std;
int main()
{
    int A[7]={3,2,1,4,5,6,7};
    int sum=0; 
    for(int i=0; i<7; i++)
    
       sum +=A[i];
    
    cout<<sum;
    return 0;
}