#include<iostream>
using namespace std;

int a=5;
class C1{
    public:
    C1(){
        ++a;
        cout<<"constructor call - a: "<<a<<endl;
    }
    ~C1(){
        --a;
        cout<<"destructor call - a: "<<a<<endl;
    }
};
int main(){
    C1 obj;
    C1 obj1;
}