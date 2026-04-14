#include <iostream>
using namespace std;

int volume(int l, int b, int h = 2) {
    return l * b * h;
}

int main() {
    cout << volume(3, 4) << endl;    
    cout << volume(3, 4, 5) << endl; 
}
