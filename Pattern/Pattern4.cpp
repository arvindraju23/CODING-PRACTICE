// write a program to print astric (*).
#include<iostream>
using namespace std;
int main()
{
    for( int i=0; i<6; i++)
    {
        for(int j=0; j<=6; j++)
        {
            if ( i>=j)
            cout<<" * ";
        }
        cout<<endl;

    }
    return 0;
}
/*
OUTPUT

 * 
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
 
 */