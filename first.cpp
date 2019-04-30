#include<iostream>
#include <cstddef>
#include <iterator>

using namespace std;



char &replacechar(int i);

int funover(int x);
int funover(int x, int y);

int pointfun(int *x, int *y);

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


class List {
    
    int id;
    string name;

//constructor overload
public:
List(){
    id=0;
    name="empty";
}

List(int d, string n){
    id = d;
    name = n;
}

void display(){
    cout<<"id:  "<<id<<endl;
    cout<<"name:  "<<name<<endl;
}
};


// char str[20]="hello World";
string str ="hello World";

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