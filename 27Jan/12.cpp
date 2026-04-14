#include <iostream>
using namespace std;

int add(int a, int b = 10) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << add(5) << endl;
    cout << add(5, 6, 7) << endl;
}
