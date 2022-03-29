#include<iostream>
using namespace std;
int main()
{
    float salary, NetSalary, percentageA, percentageD;
    cout<<"Please enter the Basic salary :\n";
    cin>>salary;
    cout<<"Enter the percentage of allowances:\n";
    cin>>percentageA;
    cout<<"Enter the percentage of deducation:\n";
    cin>>percentageD;

    NetSalary= salary+((salary*percentageA)/100)-((salary*percentageD/100));
    cout<<"The net salary is :"<<NetSalary<<endl;
    return 0;

}