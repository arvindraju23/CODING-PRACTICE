#include<iostream>
using namespace std;
/*
class Base
{
    public:
   virtual void fun1()=0;
    virtual void fun2()=0;

};
class derived:public Base{
    public:
    void fun1()
    {
        cout<<"fun1 of derived "<<endl;
    }
    void fun2()
    {
        cout<<"fun2 of derived "<<endl;
    }

};
int main()
{
    derived d;
    d.fun1();
    d.fun2();
}
*/

class Shape
{
    public:
    virtual float area()=0;
    virtual  float perimeter() = 0;
};
class Rectangle:public Shape{
    private:
    float length;
    float breadth;
    public:
    Rectangle(int l=1, int b=1)
    {
        length=l, breadth=b;
    }
    float area() {return length* breadth;}
    float perimeter (){return 2*(length + breadth);}

};
class circle:public Shape
{
    private:
    float radius ;
    public:
    circle(float r){radius=r;}
    float area(){return 3.14*radius*radius ;}
    float perimeter(){return 2*3.1425* radius ;}
};
int main()
{
    Shape *s =new Rectangle(10, 5);
    cout<<"Area of Rectangle "<<s->area()<<endl;
    cout<<"Perimeter of Rectangle "<<s->perimeter()<<endl;
    s=new circle(10);
    cout<<"Area of circle "<<s->area()<<endl;
    cout<<"Perimeter of circle "<<s->perimeter()<<endl;

}

