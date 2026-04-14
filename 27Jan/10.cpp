#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

// double square(int x) {   
//     return x * x;
// }


int main() {
    cout << square(5) << endl;
    cout << square(2.5) << endl;
}
