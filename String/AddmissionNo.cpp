#include<iostream>
using namespace std;
class Student
{
    public:
    int roll;
    string name;
    static int addNo;

    Student(string n)
    {
        addNo++;
        roll=addNo;
        name = n;
    }
    void display(){
        cout<<"Name "<<name<<endl;
        cout<<"Addmission No: "<<roll<<endl;
        
    }
   
};
int Student::addNo=0;
int main()
{
    Student s1("Raju");
    Student s2("Giri");
    Student s3("Vikash");
    Student s4("Aman");
    Student s5("Ravi");

    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    cout<<"Addmission No: "<<Student::addNo<<endl;
    
}