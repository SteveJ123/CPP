inline function
// int a =5;
// int b=5;
// inline int add(){

//     return (a + b);
// }

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