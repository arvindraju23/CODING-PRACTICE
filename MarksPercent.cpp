//Calculate percentage of marks according to subject
#include<iostream>
using namespace std;
int main()
{
    int maths,physics,chemistry,biology,hindi,percent;
    cout<<"Enter the marks of maths, physics, chemistry,biology,hindi"<<endl;
    cin>>maths>>physics>>chemistry>>biology>>hindi;
    //find percentage
    percent=(maths+physics+chemistry+biology+hindi)/5.0;
    cout<<" marks percentage is: "<<percent<<endl;

    // finding grades
    if(percent>=95)
    cout<<"A+ grade:"<<endl;
     else if(percent>=90)
    cout<<"A grade:"<<endl;
    else if(percent>=85)
    cout<<"B+ grade:"<<endl;
     else if(percent>=80)
    cout<<"B grade:"<<endl;
    else if(percent>=70)
    cout<<"c+ grade:"<<endl;
    else if(percent>=60)
    cout<<"c grade:"<<endl;
    else
    cout<<"Fail"<<endl;
    return 0;

}
    