#include <iostream>
using namespace std;

int add(int a, int b = 10) {
    return a + b;
}

int add(int a) {
    return a + 5;
}

int main() {
    // cout << add(5) << endl;  
}
