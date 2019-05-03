// #include <iostream>
// using namespace std;

// class Check
// {
//   private:
//     int i;
//   public:
//     Check(): i(0) {  }
//     Check operator ++ ()
//     {
//         Check temp;
//         temp.i = ++i;
//         return temp;
//     }

//     // Notice int inside barcket which indicates postfix increment.
//     Check operator ++ (int)
//     {
//         Check temp;
//         temp.i = i++;
//         return temp;
//     }

//     void Display()
//     { cout << "i = "<< i <<endl; }
// };

// int main()
// {
//     Check obj, obj1;    
//     obj.Display(); 
//     obj1.Display();

//     // Operator function is called, only then value of obj is assigned to obj1
//     obj1 = ++obj;
//     obj.Display();
//     obj1.Display();

//     // Assigns value of obj to obj1, only then operator function is called.
//     obj1 = obj++;
//     obj.Display();
//     obj1.Display();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class base
// {
//     public:
// void C()
// {
// cout<<"C is here";
// }
// virtual void cpp()       //virtual Function
// {
// cout<<"C++ is here";
// }
// };
// class derived : public base
// {
// void C()
// {
// cout<<"C is there";
// }
// void cpp()
// {
// cout<<"C++ is there";
// }
// };

// template <typename T>
// class weight{

// private:
// T kg;

// public:
// weight(){


// }
// void setdata(T a){
//     kg = a;
// }

// void display(){
//     cout<<kg<<endl;
// }

// };

// template <typename T1, typename T2> void add(T1 a, T2 b);

// int main()
// {
// base b1;       //object
// derived d1;    //object
// base *bptr;      //pointer
// bptr=&b1;
// bptr->C();      // C is here
// bptr->cpp();   //C++ is here
// bptr=&d1;
// bptr->C();      // C is here
// bptr->cpp();   //C++ is there
//Output virtual Function
// float a = 5.4;
// float b = 5.4;
// add(a,b);


// weight<float> w;
// w.setdata(10.5);
// w.display();
// return 0;
// }

// template <typename T1, typename T2> void add(T1 a, T2 b){
//     cout<<a+b<<endl;

// }



#include <iostream>
#include <cstdlib>
using namespace std;

double myCalculator(double a, double b) {
	if(a == b) {
		cout << "exit(1)!" << endl;
		exit(1);
        // cout << "abort()!" << endl;
		// abort();
	
	}
	return 1 / (a - b);
}

int main () {
	double x,y,z;
	x = 10;
	y = 10;
	z = myCalculator(x,y);
	cout << "x = " << x << " y = " << y << " z = " << z << endl;
	return 0;
}

