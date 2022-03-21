#include<iostream>
#include <String>
using namespace std;
int main()
{
    char A[]={'W','e','L','c','O','m','E','\0'};
    //Now start traversing through the array
    int i;
    for(i=0; A[i]!='\0' ; i++)

    {
        if(A[i]>=65 && A[i]<=90)
        //If character is Capital this will change to small.
        {
            A[i] +=32;

        }
        else if(A[i]>=97 && A[i]<=122)
        //if character is small this will change to capital.
        {
            A[i] -=32;
        }
        //If any special character found that will remain same;
    }
    cout<<A;
    return 0;

}