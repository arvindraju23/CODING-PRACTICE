#include <iostream>
using namespace std; 

class Rectangle
{
    int length;
    int breadth;
  
    public:

    void setLength(int l)
    {
        if(l>=0)
        length=l;
        else
        cout<<"Length can not be negative "<<endl;

    }
    void setBreadth(int b)
    {
        if(b<0)
        cout<<"Breadth can not be negative "<<endl;
        else
        breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
   {
        return breadth;
   }

   int area()
   {
       return length*breadth;

   }
   int perimeter()
   {
       return 2*(length+breadth);
   }
};
    int main()
    {
        Rectangle r;
        r.setLength(10);
        r.setBreadth(5);
        cout<<r.area()<<endl;
        cout<<"Length is "<<r.getLength()<<endl;
        cout<<"Breadth is "<<r.getBreadth()<<endl;
    }
