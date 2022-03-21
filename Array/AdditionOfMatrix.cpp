//Addition of two matrix.
#include<iostream>
using namespace std;
int main()
{
    int a[100][100];
    int b[100][100];
    int add[100][100];
    int r1,c1,r2,c2;
    cout<<"Enter rows  of 1st Matrix: ";
    cin>>r1;
    cout<<"Enter column  of 1st Matrix: ";
    cin>>c1;
    cout<<"Enter the rows of 2nd Matrix: ";
    cin>>r2;
    cout<<"Enter column  of 2st Matrix: ";
    cin>>c2;
    if(c1 != r2)
    {
        cout<<"Matrix can't be added: ";
        return 0;
    }
    //storing elements of 1st Matrix;
    cout<<"Enter the elements of 1st matrix:"<<endl;
    for(int i=0; i<r1; ++i)
    
        for(int j=0; j<c1; ++j)
          {
              cout<<"Enter elements a"<<i+1<<j+1<<":";
              cin>>a[i][j];
          }
          //Enter elements of 2nd matrix.
          cout<<endl<<"Enter the elements of 2nd matrix: "<<endl;
          for(int i=0; i<r2; ++i)
          for(int j=0; j<c2; ++j)
          {
              cout<<"Enter the elements of b: "<<i+1<<j+1<<":";
              cin>>b[i][j];
          }
    {
        for( int i=0; i<r1; i++)
        for( int j=0; j<c1; j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }

    }
    for( int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }
     return 0;


}