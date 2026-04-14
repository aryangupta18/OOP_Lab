#include<iostream>
using namespace std;

class A{
    int a;
    float b;
    public:
    A(int x, float y): a(x), b(y){
        print();
    }
    void print(){
        cout << "a: " << a << ", b: " << b << endl;
    }
};

class B{
    int a1;
    float b1;
    public:
    B(int x, float y): a1(x), b1(y){
        print();
    }
    void print(){
        cout << "a1: " << a1 << ", b1: " << b1 << endl;
    }
};

int main() {
    A obj1(5, 10.5);
    B obj2(15, 20.5);
    return 0;
}