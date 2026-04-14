#include <iostream>
using namespace std;

int volume(int l, int b = 2, int h = 3) {
    return l * b * h;
}

int main() {
    cout << volume(5) << endl;      
    cout << volume(5, 4) << endl;  
}
