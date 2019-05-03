/*Polymorphism, Virtual Functions and Abstract Class

In C++, a pointer variable of a base class type can point to an object of its derived
class. There are situations when this feature of C++ can be used to develop generic
code for a variety of applications.
*/


/* file:///D:/slide/chapter27-polymorphism-virtual-function-abstract-class-150809074327-lva1-app6891.pdf */

#include <iostream>
using namespace std;

class Shape{
    protected:
    double width, height, check;
    public:
    void setdata(double a, double b){
        width=a;
        height=b;
        cout<<width<<height<<endl;
    }
    void setcheck(double c){
        check=c;
        cout<<check<<endl;
    }
 virtual double area()=0;
};

class Rectangle:public Shape{

public:
double area(){

    return(width*height);
}
};

int main(){

    Shape *sPtr;
    Rectangle Rect;
    sPtr = &Rect;

    sPtr->setdata(5,3);
    // sPtr->setcheck(5);
//   double result =  static_cast <Rectangle *> (sPtr)->area(); //typecasting
// cout<<result<<endl;

    double result = sPtr->area();
    cout<<result<<endl;
    
    return 0;
}





// Rect.setdata(5,3);
//     double result = Rect.area();
//     cout<<result<<endl;
    