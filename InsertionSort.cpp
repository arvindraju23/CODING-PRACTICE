#include<iostream>
using namespace std;
int main()
{
    int i, j,k,a[100], temp;
    cout<<"Enter the numbers of element\n";
    cin>>k;
    cout<<"Enter the element \n";
    for(k=1; k<10; k++)
    cin>>a[k];
    {
        temp=a[k];
        j=k-1;
        while (j>=0)
        {
            if(temp<=a[j])
            {
                a[j+1]=a[j];
                j=j+1;

            }
            else
            a[j+1]=temp;

        }
        for(i=0; i<10; i++)
        {
             cout<<a[i];
        }
        
    }
   
}