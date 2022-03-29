#include <iostream>
using namespace std;
int main()
{
    int a,b,i,j,flag ;
    cout<<"Enter the Lower and Upper Bound"<<endl ;
    cin>>a>>b;
    cout<<" The prime number between "<< a <<" to "<< b <<"is :"<<endl;
    
    for (i=a; i<=b; i++)
    {
        if(i==1 || i==0)
        
            continue;
            flag=1;
        
        for (j=2; j<=i/2;++j)
        
            if (i%j==0)
            {
                flag =0;
                break;
            }
        
       
        
             if(flag ==1)
             
        
            cout<<i<<" "<<endl;
    }
    
    
         return 0;
}