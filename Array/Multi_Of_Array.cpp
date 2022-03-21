//Multiplication of Matrix.
#include<iostream>
using namespace std;
int main()
{
    int a[100][100];
    int b[100][100];
    
    int mult[100][100];
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
        cout<<"Matrix can't be Multiplide: ";
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
          //Multiplying a and b Matrix and storing in array mult.
          for (int i=0; i<r1 ; ++i)
          for (int j=0; j<c2; ++j)
          {
              mult[i][j]=0;
              for(int k=0; k<c1; ++k)
              {
                  mult [i][j] += a[i][k]*b[i][j];
              }
          }
          // Displaying the multiplication of two matrix.
          cout<<endl<<"Output Matrix: "<<endl;
          for(int i=0; i<r1; ++i)
          for (int j=0; j<c2; ++j)
          {
              cout<<" "<<mult[i][j];
              if(j==c2-1)
              cout<<endl;
          }
          return 0;
    
}