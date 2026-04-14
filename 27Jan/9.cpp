#include <iostream>
using namespace std;

void square(int x) {
    cout<<x * x<<endl;
}

void square(float x) {
    cout<< x * x<<endl;
}

void square(double x) {
    cout<< x * x<<endl;
}

int main() {
    square(5);
    square(3.5f);
    square(2.5);
}
