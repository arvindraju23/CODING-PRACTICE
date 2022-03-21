#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str="Arvind   is a good programmer";
    int vowels=0, consonants=0,space=0;
    for(int i=0;str[i]!='\0';i++)
    {  if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
        vowels++;
        else if(str[i]==' ')
        space++;
        else
        consonants++;
    }
        cout<<"Vowels are "<<vowels<<endl;
        cout<<"Consonants are "<<consonants<<endl;
        cout<<"Words are "<<space+1<<endl;
        return 0;

}