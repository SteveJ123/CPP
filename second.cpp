#include<iostream>
#include <cstddef>
#include <iterator>

using namespace std;

class Student{
    public:
static int count;

Student(){
    count++;
}

};


int Student::count = 0;
// int Student::x = 10;

int main(){

Student s;
Student t;
cout<<s.count<<endl;
    return 0;
}
