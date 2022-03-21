/*//WAP of class for student with
1. Roll
2.Name
3.Marks in 3 subjects
furnction for total marks, grade and required method*/
#include <iostream>
using namespace std;
class Student
{
    int roll;
    string name;
    int mathsMarks;
    int phyMarks;
    int chemMarks;
    
    public:
    Student(int r, string n, int m,int p,int c)
    {
        roll=r;
        name=n;
        mathsMarks=m;
        phyMarks=p;
        chemMarks=c;

    }
    int total()
    {
        return mathsMarks+phyMarks+chemMarks;
    }
    char grade()
    {
        float average=total()/3;

        if(average>60)
        return 'A';
        else if (average>=40 && average<60)
        return 'B';
        else
        return 'C';
        
    }

};

int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter Roll number of a student:";
    cin>>roll;
    cout<<"Enter name of the student :";
    cin>>name;
    cout<<"Enter marks of maths: ";
    cin>>m;
    cout<<"Enter physics marks :";
    cin>>p;
    cout<<"Enter chemistry marks :";
    cin>>c;
    Student s(roll,name , m,p,c);
    cout<<"Total Marks : "<<s.total()<<endl;
    cout<<"Grade of student:"<<s.grade()<<endl;
}

/* OUTPUT

Enter Roll number of a student:38
Enter name of the student :ARVIND
Enter marks of maths: 100
Enter physics marks :99
Enter chemistry marks :98
Total Marks : 297
Grade of student:A

*/