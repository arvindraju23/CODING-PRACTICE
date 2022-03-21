#include <iostream>
using namespace std;
int main()
{
    int i, n, count=0;
    cout<<"Enter the no :";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"Prime no"<<endl;
    }
    else
    cout<<"Not Prime"<<endl;
    return 0;
}