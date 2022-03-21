#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="Arvind Kumar ";
    char s2[10]="Raju";
    
    strcat(s1,s2);
    cout<<s1<<endl;
    return 0;
}