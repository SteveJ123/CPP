
g++ -g first.cpp -o first
first.exe

inline function  - when function is called compiler control is transfered to function definition
when inline function is used function definition will be copy pasted wherever function call is made.
It saves compiler time.  Otherwise it same as normal function.
// int a =5;
// int b=5;
// inline int add(){

//     return (a + b);
// }



if you try to access a and b inside main by making int a, b in gloabl scope
then compiler will initialize default value to 0.
It is called default parameter.

int main(){
int a = 10;
int b = 10;

cout<<"sum of numbers"<<add()<<endl;  //output 10
}



method 2

inline int add(int a, int b){

    return (a + b);
}



int main(){
int a = 10;
int b = 10;

cout<<"sum of numbers"<<add(a, b)<<endl; //output 20
cout<<"this is test";

    return 0;    
}
//value inside main is used

/**/


#include<iostream>
using namespace std;

class List {
    
    int next;

public:
void setnext(int x){
    next = x;
}

int getnext(){
    return next;
}
};


int main(){

List l;
l.setnext(10);
cout<<"next value is: "<<l.getnext();
    return 0;    
}



//iterating array elements

size of array size_t testing = sizeof(texts)/sizeof(texts[0]);


string texts[] = {"Apple", "Banana", "Orange"};
size_t testing = sizeof(texts)/sizeof(texts[0]);
cout<<testing<<endl;



string texts[] = {"Apple", "Banana", "Orange"};
for( unsigned int a = 0; a < sizeof(texts); a = a + 1 )
{
    cout << "value of a: " << texts[a] << endl;
}



string texts[] = {"Apple", "Banana", "Orange", ""};
   for( unsigned int a = 0; texts[a].length(); a = a + 1 )
   {
       cout << "value of a: " << texts[a] << endl;
   }