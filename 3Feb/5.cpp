#include<iostream>
using namespace std;

class A{
    int n;
    public:
    A(){}
    A(int a){
        n = a;
        cout<<n<<endl;
    }
    void printVal(){
        cout<<n<<endl;
    }
    ~A(){
        cout<<"Destructor "<<endl;
    }
};

int main(){
    // dynamic array of objects
    A* a = new A[10];
    cout<<&a<<endl;
    for (int i = 0; i < 10; i++)
    {
        a[i]= A(i*10);
    }
    // destructor is getting called for the temp obj as soon as the execution reaches line 26 destructor is called for temporary object.


    // for (size_t i = 0; i < 10; i++)
    // {
    //     a[i].printVal();
    // }
    cout<<&a<<endl;
}