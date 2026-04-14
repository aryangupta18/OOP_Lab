#include <iostream>
using namespace std;

int volume(int l, int b = 2, int h = 3) {
    return l * b * h;
}

int main() {
    cout << volume(4) << endl;
    cout << volume(4, 5) << endl;
    cout << volume(4, 5, 6) << endl;
}
