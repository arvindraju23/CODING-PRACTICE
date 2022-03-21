#include <iostream>
using namespace std;
int main()
{
    int A[7]={3,6,10,4,7};
    int max;
    max=A[0];
    for(int i=0; i<7; i++)
    {
        if(A[i]>max){
            max=A[i];
        }

    }
    cout<<"Maximum is: "<<max;
    return 0;
}