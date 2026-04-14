#include<iostream>
using namespace std;
class A{
    int a =564;
    public:
    A(int a){
        this->a=a;
    }
    void display(){
        cout<<a;
    }
};
int main(){
    A a(5);
    a.display();
}