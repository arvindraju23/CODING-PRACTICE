//Liner search means find location of the desired element. 
//Element need not to be in sorted order .
//it is slower then the Binary search.
// time complexity is O(n).

#include<iostream>
using namespace std;
int main()
{
    int A[10] , n=10, i, key;
    cout<<"Enter the elements ";
    for(i=0; i<n; i++)
    {
        cin>>A[i];

    }
    cout<<"Enter the Key : ";
    cin>>key;
    for(i=0;i<n; i++)
    {
        if(key==A[i])
        {
            cout<<"Found at : "<<i;
            return 0;
        }
    }
    cout<<"Not Found";
    return 0;
}