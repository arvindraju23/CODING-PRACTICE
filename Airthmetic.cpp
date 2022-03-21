
// Performing Airthmetic Operation
#include<iostream>
using namespace std;
int main()
{
    int a, b, sum, diff , pro , rem;
    float div;
    cout<<"Enter two operands a and b \n";
    cin>>a>>b;
    sum= a+b;
    cout<<"Summation of a and b is:"<<sum<<endl;
    diff= a-b;
    cout<<"difference is :"<<diff<<endl;
    pro=a*b;
    cout<<"product is:"<<pro<<endl;
    div=(float)a/b;
    cout<<"division is:"<<div<<endl;
    rem=a%b;
    cout<<"remainder is :"<<rem<<endl;
    cout<<endl;
    return 0;
}