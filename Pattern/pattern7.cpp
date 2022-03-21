
// WAP to print isosceles triangle 
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the rows & column :";
    cin>>num;
    
    for(int i=0; i<num ; i++)
    {
        for( int j=0; j<num ;j++)
        {
            if ( i+j>num-1)
            cout<<" * ";
            else
            cout<<" ";

        }
        cout<<endl;
    }
    return 0;
}
/*
output


          *
         *  *
        *  *  *
       *  *  *  *
      *  *  *  *  *
     *  *  *  *  *  *
    *  *  *  *  *  *  *
   *  *  *  *  *  *  *  * 
  *  *  *  *  *  *  *  *  *
  

  */