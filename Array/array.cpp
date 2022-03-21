#include<iostream>
using namespace std;
int main()
{
    //Accessing element using for loop
    // int A[5]={3,5,6,2,8};
    // for(int i=0; i<5; i++)
    // cout<<A[i]<<endl;
    // return 0;

    //Accessing element using for each loop
    int A[5]={3,5,6,2,8};
    for(int x:A)
    cout<<x<<endl;
    return 0;

    //Accessing element Using auto for each loop (don't care about data type)
    // int  A[]={4,2,5,8,9};
    // for(auto x:A)
    //cout<<x<<endl;
    // return 0;
    
}