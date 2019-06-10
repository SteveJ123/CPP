#include<iostream>
#include <cstddef>
#include <iterator>

using namespace std;


class Complex{

int x;
int y;

public:

Complex(){

}

Complex(int a, int b){
x=a;
y=b;
}

void setValue(){
    cout<<x<<'+'<<y<<'i'<<endl;
}

int getX(){
    return x;
}

int getY(){
    return y;
}
};


Complex add(Complex a, Complex b){

int real = a.getX() + b.getX();
int img = a.getY() + b.getY();

Complex temp(real, img);

return temp;

}

int main(){

Complex c1(10, 10);
Complex c2(10, 10);
c1.setValue();
c1.setValue();

Complex c3;

c3 = add(c1, c2);
c3.setValue();

    return 0;
}