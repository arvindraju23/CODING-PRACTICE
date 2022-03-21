//WAP TO FIND YOUNG OR NOT : ELLIGIIBLE OF OFFER OR NOT
#include<iostream>
using namespace std;
int main()
{
   int age;
   cout<<"Enter your age:"<<endl;
   cin>>age;
   if (age>=15 && age<=50)
   {
       cout<<"You are young :"<<age<<endl;

   }
   else
   {
       cout<<"You are not Young :"<<age<<endl;

   }
   if (age<15 || age>50)
   {
       cout<<"You are elligible for offer: "<<age<<endl;

   }
   else{
       cout<<"you are not elligible for offer:"<<age<<endl;
   }
   return 0;
}