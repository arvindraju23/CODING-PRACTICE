#include <iostream>
using namespace std;
int main()
{
    int A[2][3]={{1,4,3}, {7,5,8}};
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<A[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}
/*
output
1 4 3 
7 5 8

*/

/*
//Displaying element  using for each loop.
#include<iostream>
using namespace std;
int main()
{
    int A[2][3];
    for(auto& x:A)
    {
        for(auto& y:x)
        {
            cin>>y;
        }
        cout<<endl;
    }
    for(auto& x:A)
    {
        for(auto& y:A)
        {
            cout<<y<<" ";

        }
        cout<<endl;
    }
    return 0;
}
*/