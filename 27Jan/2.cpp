// write a func to cal quotient and remainder and return both
// use call by reference and reference variables
#include<iostream>
using namespace std;
void divide(int a, int b, int& q, int& r){
    q = a/b;
    r = a%b;
}

int main(){
    int a = 34789, b = 45, q = 0, r = 0;
    divide(a,b,q,r);
    cout<<"quotient : "<<q<<endl;
    cout<<"remainder : "<<r<<endl;
} 



