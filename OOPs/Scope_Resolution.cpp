//Using Scope Resolution find area of Rectangle
//Write all the member function.
#include<iostream>
using namespace std;

class Rectangle
{
    //By default Data function is private.
    int length;
    int breadth;

    public:
    Rectangle();   //default consturctor or non_parameterised constructor.
    Rectangle(int l, int b);//parameterised constructor.
    Rectangle(Rectangle &r);//copy constructor.
    //Mutator
    void setLength(int l);
    void setBreadth(int b);
    //Accessor
    int getLength();
    int getBreadth();
    //Facilitator
    int area();
    int perimeter();
    //enquiry
    bool isSquare();
    //Destructor
    ~Rectangle();
};

int main()
{
    Rectangle r1(10,10);
    cout<<"Area "<<r1.area()<<endl; //dot (.) operator is used to access function member.
    if(r1.isSquare())// if rectangle is Square means length = breadth print "Yes"
    cout<<"Yes "<<endl;

}
//Elaborating body of member function outside the class using scope Resolution.
Rectangle::Rectangle()
{
    length=1;
    breadth=1;

}
Rectangle::Rectangle(int l, int b)
{
    length=l;
    breadth=b;

}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;

}
void Rectangle :: setLength(int l)
{
    length=l;
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed ";
}


/* OUTPUT

Area 100
Yes 
Rectangle Destroyed 

*/