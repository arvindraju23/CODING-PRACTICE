#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }
    int perimter()
    {
        return 2*(length + breadth);
    }
};

int main()
{
    Rectangle r1,r2;
    r1.length=10;
    r1.breadth=50;
    cout<<r1.area()<<endl;
    r2.length=30;
    r2.breadth=40;
    cout<<r2.area()<<endl;
    return 0;

}