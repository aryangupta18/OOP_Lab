#include<iostream>
using namespace std;

void Constdivide(const int& a, const int& b, int& q, int& r){
    // a = 4567;
    // b = 6; 
    q = a/b;
    r = a%b;
}

int main(){
    int a = 34789, b = 45, q = 0, r = 0;
    Constdivide(a,b,q,r);
    cout<<"quotient : "<<q<<endl;
    cout<<"remainder : "<<r<<endl;
} 



