#include<iostream>
#include <cstddef>
#include <iterator>

using namespace std;



class Add1{
    int value1;
    int value2;

    public:
    Add1(){

    }

    Add1(int a, int b){
        value1=a;
        value2=b;
    }

    void display(){
        cout<<value1<<" "<<value2<<endl;
    }


    Add1 operator+(const Add1 &ob){
        Add1 temp;
        temp.value1 = this->value1+ob.value1;
        temp.value2 = this->value2+ob.value2;
        return temp;
    }
};



int main(){


    Add1 *p1;
Add1 *p2;
Add1 ad1(20, 40);
Add1 ad2(20,10);

p1= &ad1;
p2=&ad2;
// ad1.display();
// ad2.display();
// Add1 ad3 = ad1+ad2;
Add1 ad3 = (*p1)+(*p2);
ad3.display();
    return 0;    
}