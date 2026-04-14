#include <iostream>
using namespace std;

int volume(int, int, int = 2);  

int volume(int a, int b, int c = 5) {  
    return a * b * c;
}

int main() {
    cout << volume(2, 3) << endl;
}
