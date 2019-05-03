#include<iostream>
using namespace std;

class A{
protected:
int a = 10;

public:
void display(){
    cout<<a<<"inside A"<<endl;
}

};

class B{
protected:
int b = 10;
public:
void display(){
    cout<<b<<"inside B"<<endl;
}
};


class C: public A, public B{
protected:
int sum;
public:
void add(){
    sum = a+b;
    cout<<"sum"<<sum<<endl;
}

void display(){
    A::display();
    B::display();
}
};

int main(){

C test;
test.add();
test.display();

    cout<<"testing"<<endl;
    return 0;
}