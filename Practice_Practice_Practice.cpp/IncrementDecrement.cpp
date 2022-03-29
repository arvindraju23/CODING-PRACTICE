#include<iostream>
using namespace std;
int main()
{
    int i=5, j;
    j=i++;
    cout<<i<<" "<<j<<endl;

    int k=5, l;
    l=++k;
    cout<<k<<" "<<l<<endl;

    int m=5, n;
    n=2* ++m + 2* m++;
    cout<<m<<" "<<n<<endl;

    int o=5, p;
    p=2*o++ + 2* o++;
    cout<<o<<" "<<p<<endl;
    return 0;
}