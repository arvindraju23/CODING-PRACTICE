//Palindrome Number: If the reverse number is same as original number .

#include<iostream>
using namespace std;
int main()
{
    int n,r,temp, rev=0;
    cout<<"Enter any number";
    cin>>n;
    temp=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if (rev==temp) cout<<"Palindrome Number"<<endl;
    else cout<<"Not Palindrome number"<<endl;
    return 0;
    
}