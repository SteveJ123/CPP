#include<iostream>
#include <cstddef>
#include <iterator>

using namespace std;

int x = 40;
/*polymorphism*/

// class Enemy{

//     protected:
//     int attackpower;

//     public:
//     void setattackpower(int a){
//         attackpower = a;
//     }
// };

// class Ninja: public Enemy{
//     public:
//     void attack(){
//         cout<<"I am ninja - " <<attackpower<<endl;
//     }
// };


// class Monster: public Enemy{

//     public:
//     void attack(){
//         cout<<"I am monster - "<<attackpower<<endl;
//     }
// };



class Enemy{
    
    int attackpower = 10;

    public:
    void setattackpower(int a){
        attackpower = a;
    }


    friend class Ninja;
};

class Ninja{
    public:
    void attack(Enemy e){
        cout<<"I am ninja - " <<e.attackpower<<endl;
    }
};




// char &replacechar(int i);

// int funover(int x);
// int funover(int x, int y);

// int pointfun(int *x, int *y);



// class Add1{
//     int value1;
//     int value2;

//     public:
//     Add1(){

//     }

//     Add1(int a, int b){
//         value1=a;
//         value2=b;
//     }

//     void display(){
//         cout<<value1<<" "<<value2<<endl;
//     }


//     Add1 operator+(const Add1 &ob){
//         Add1 temp;
//         temp.value1 = this->value1+ob.value1;
//         temp.value2 = this->value2+ob.value2;
//         return temp;
//     }

//no function name - return type
// friend Add1 operator+(Add1 l1, Add1 l2);

//  Add1 operator++(int){
//     this->value1++;
//     this->value2++;
//     return *this;
// }

// Add1 operator++(){
//     ++(this->value1);
//     ++(this->value2);
//     // return *this;
// }
// };
// class List {
//     int next;
//    List() : next(10) {}
// }
// why they initialize next like this
// why not like this
// class List {
//     int next;
//    List() { next = 10;  }
// }


// class List {
    
//     int id;
//     string name;

// //constructor overload
// public:
// List(){
//     id=0;
//     name="empty";
// }

// List(int d, string n){
//     id = d;
//     name = n;
// }

// void display(){
//     cout<<"id:  "<<id<<endl;
//     cout<<"name:  "<<name<<endl;
// }
// };


//friend function operator overloading
//no function name - return type
// Add1 operator+(Add1 l1, Add1 l2){
//     Add1 temp;
//     temp.value1 = l1.value1 + l2.value1;
//     temp.value2 = l1.value2 + l2.value2;
//     return temp;
// }



// char str[20]="hello World";
// string str ="hello World";

int main(){


// List l = List(1, "David");
// List l2 =List(2, "Boon");

// l.display();
// l2.display();


    // string s="some string";
    // auto begintest=s.begin();
    // cout<<&begintest<<endl;




// string texts[] = {"Apple", "Banana", "Orange"};
// size_t testing = sizeof(texts)/sizeof(texts[0]);
// cout<<testing<<endl;


    // string &t = s;
    // t[0]= "S";

    // s[0]="S";
    // cout<<s.begin()<<endl;
    // if (t.begin() != t.end()) {        
    //     auto ot = t.begin();
    //     *ot = toupper(*ot);
          
    // }




    // cout<<s<<endl;



//     string str ("Test string");
//   for (string::iterator it=str.begin(); it!=str.end(); ++it)
//     std::cout << *it;
//   std::cout << '\n';
// replacechar(4);
// replacechar(0)='H';
// cout<<str<<endl;


// int arr[]={1, 2, 3, 4, 5, 6};
// auto begintest = begin(arr);
// cout<<begintest<<endl;


// int sum = 0, value = 0;
//  // read until end-of-file, calculating a running total of all values read
//  while (std::cin >> value)
//  sum += value; // equivalent to sum = sum + value
//  std::cout << "Sum is: " << sum << std::endl;

//function overload

// int x = 10;
// int y = 20;

// int fun1 = funover(x);
// cout<<fun1<<endl;
// int fun2 = funover(x, y);
// cout<<fun2<<endl;

//constructor overload

// List l(1, "David");
// l.display();

// List l1;
// l1.display();

//pointer to function

// pointfun(&x, &y);
// cout<<"value of x: "<<x<<endl;
// cout<<"value of y: "<<y<<endl;

//array

// string arr[]={"test", "test", "test", "test"};

// for(int i=0; i<4; i++){
// cout<<"arr value: "<<arr[i]<<endl;    
// }

// string *p;
// p=arr;  //points to first element of arr - address

// for(int i=0; i<4; i++){
// cout<<"arr value: "<<*(p+i)<<endl;    
// }




//constructor overload
// Add1 *p1;
// Add1 *p2;
// Add1 ad1(20,20);
// Add1 ad2(20,10);

// p1= &ad1;
// p2=&ad2;
// ad1.display();
// ad2.display();
// Add1 ad3 = ad1+ad2;
// Add1 ad3 = (*p1)+(*p2);
// ad3.display();

// ++ad1;
// ad1.display();

// (ad1++).display();
// ad1.display();

// Ninja n;
// Monster m;
// n.setattackpower(20);
// m.setattackpower(10);
// n.attack();
// m.attack();


// Ninja n;
// Enemy m;
// n.attack(m);
int x =20;
cout<<::x<<endl;



    return 0;    
}


// char &replacechar(int i){
// str[i] = "X";
// cout<<str[i]<<endl;
//     return str[i];
// }


//function overload

// int funover(int x){

//     return x;
// }


// int funover(int x, int y){

//     return x+y;
// }

//pointer to function

int pointfun(int *x, int *y){

    int t = *x;
    *x = *y;
    *y = t;
}