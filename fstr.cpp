#include<iostream>
#include<fstream>

using namespace std;


int main(){
    // cout<<"testing"<<endl;

    fstream myfile;
    myfile.open("test.txt");

    if(myfile.is_open()){
        myfile<<"this is testing";
    myfile.close();

    }

    
    return 0;
}