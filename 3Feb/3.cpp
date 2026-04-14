#include<iostream>
using namespace std;
class C1{
    public:
    int* n;
    C1() {
        n = new int(5);
    }
    void printn(){
        cout << *n << endl;
    }
    void address(){
        cout << n << endl;
    }
    ~C1(){
        cout << "Destructor called, memory freed." << endl;
        address();
    }
};
int main(){
    C1 obj;
    obj.printn();
    obj.address();
}