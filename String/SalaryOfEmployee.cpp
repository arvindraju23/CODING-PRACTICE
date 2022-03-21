#include<iostream>
using namespace std;
class Employee
{
    private:
    int eid;
    string name;
    public:
    Employee(int e,string n)
    {
        eid=e;
        name=n;
    }
    int getEmployeeID(){return eid;}
    string getName(){return name;}

};
class FulltimeEmployee:public Employee
{
    private:
    int Salary;
    public:
    FulltimeEmployee(int e , string n, int sal):
    Employee(e,n){
        Salary=sal;
    }
    int getSalary(){return Salary;}

};
class ParttimeEmployee:public Employee
{
    private:
    int wage;
    public:
    ParttimeEmployee(int e, string n, int w):
    Employee(e,n)
    
    {
        wage=w;
    }

    int getwage(){return wage;}

};

int main()
{
    ParttimeEmployee p1(1, "Vikash ", 5000);
    ParttimeEmployee p2(2, "Girindra ", 6000);
    FulltimeEmployee p3(3, "Aman ", 60000);
    FulltimeEmployee p4(4, "Arvind ", 55000);
   
    cout<<"Daily wage of "<<p1.getName()<<" is "<<p1.getwage()<<endl;
    cout<<"Daily wage of "<<p2.getName()<<" is "<<p2.getwage()<<endl;
    cout<<"Salary of "<<p3.getName()<<" is "<<p3.getSalary()<<endl;
    cout<<"Salary of "<<p4.getName()<<" is "<<p4.getSalary()<<endl;
    
}