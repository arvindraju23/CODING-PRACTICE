#include<iostream>
using namespace std;

template <class T>
T maxim(T a, T b)
{
    return a>b?a:b;

}
int main()
{
    cout<<maxim(14,54)<<endl;
    cout<<maxim(1.2,4.6)<<endl;
    cout<<maxim(1.5f,66.4f)<<endl;
    return 0;
}