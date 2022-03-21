#include<iostream>
using namespace std;
int main()
{
    int n;
    float average,num[100], sum=0.0; 
    cout<<"Enter the numbers of elements: ";
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cout<<i+1 <<" Enter number: ";
        cin>>num[i];
        sum +=num[i];

    }
    average=sum/n;
    cout<<" Average ="<<average;
    return 0;
}