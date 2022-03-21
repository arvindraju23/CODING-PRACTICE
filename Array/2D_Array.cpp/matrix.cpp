//WAP to print Matrix

#include<iostream>
using namespace std;
int main()
{
    int a[10][10];
    int r,c;
    cout<<"Enter the rows of matrix: ";
    cin>>r;
    cout<<"Enter the column of matrix: ";
    cin>>c;
    // Storing the elements
    for(int i=0; i<r;i++)
    for(int j=0; j<c; j++)
    {
        cout<<"Enter the elements a"<<i+1<<j+1<<"=";
        cin>>a[i][j];
    }
    //Displaying matrix.
    cout<<endl<<"Output Matrix:"<<endl;
    for(int i=0; i<r;i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
OUTPUT MATRIX
Enter the rows of matrix: 4
Enter the column of matrix: 4
Enter the elements a11=1
Enter the elements a12=2
Enter the elements a13=0
Enter the elements a14=3
Enter the elements a21=5
Enter the elements a22=6
Enter the elements a23=4
Enter the elements a24=8
Enter the elements a31=9
Enter the elements a32=5
Enter the elements a33=7
Enter the elements a34=6
Enter the elements a41=5
Enter the elements a42=2
Enter the elements a43=1
Enter the elements a44=0

Output Matrix:
1 2 0 3
5 6 4 8
9 5 7 6
5 2 1 0

*/