#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the number of rows and column :"<<endl ;
    cin>>num;
    for(int i=0; i<=num; i++)
    {
        for(int j=0; j<num -i+1; j++)
        {
            //cout<<" Raju ";
            cout<<" * ";

        }
        cout<<endl;
        
    }
    return 0;
}
/*
output
Enter the number of rows and column :10
 *  *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *
 
 */