#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,3,4,5,6};
    int *p=A;
   /* for(int i=0; i<5;i++)
    {
        cout<<A[i]<<endl;
    }
    OUTPUT
    2
    3
    4
    5
    6

    */

   /* cout<<p<<endl;
    cout<<p+2<<endl;

    OUTPUT
    0xadde1ffba0
    0xadde1ffba8
    */
    cout<<*p<<endl;
    cout<<*(p+2)<<endl;
    return 0;
}