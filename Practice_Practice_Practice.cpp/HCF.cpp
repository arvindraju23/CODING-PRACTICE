/*Finding HCF : for finding Highest common factor of two number always substract smaller number from greatest nmber until both equal, 
at least they equal to 1.*/

#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter two number\n";
    cin>>m>>n;
    while(m!=n)
    {
        if (m>n)
        {
            m=m-n;
        }
        else if (n>m)
        {
            n=n-m;
        }
    }
    cout<<m<<endl;
    return 0;
}