#include<iostream>
using namespace std;



char &replacechar(int i);
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


public:
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
replacechar(0)='H';
cout<<str<<endl;
    return 0;    
}


char &replacechar(int i){
// str[i] = "X";
// cout<<str[i]<<endl;
    return str[i];
}