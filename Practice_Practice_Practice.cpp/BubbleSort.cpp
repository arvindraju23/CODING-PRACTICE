#include<iostream>
using namespace std;
int main()
{
    int i,j, first, last, mid, search , n,temp, arr[100];
    cout<<"Enter the numbers of element\n" ;
    cin>>n;
    cout<<"Enter element:\n";
    for(i=0; i<n; i++)
    cin>>arr[i];
    for(i=0;i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Enter the element to find the location\n";
    cin>>search;
    first=0;
    last=n-1;
    mid=(first+last)/2;

    while(first<=last)
    {
        if(arr[mid]<search)
        first=mid+1;
        else if(arr[mid]==search)
        {
            cout<<"Found element location is:\n"<<search<<" "<<mid+1;
            return 0;
        }
        else
        last=mid-1;
        mid=(first+last)/2;
    }
    if(first>last)
    cout<<"Not found the element location";
    return 0;
}