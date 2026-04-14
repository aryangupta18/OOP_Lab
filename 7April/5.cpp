#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char str[100];
public:
    String() {
        str[0] = '\0';
    }
    String(const char* s) {
        strncpy(str, s, 99);
        str[99] = '\0';
    }
    bool operator==(const String& other) const {
        return strcmp(str, other.str) == 0;
    }
    void display() const {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello");
    String s2("Hello");
    String s3("World");

    if (s1 == s2) {
        cout << "s1 == s2 " << endl;
    } else {
        cout << "s1 != s2 " << endl;
    }

    if (s1 == s3) {
        cout << "s1 == s3 " << endl;
    } else {
        cout << "s1 != s3 " << endl;
    }

    return 0;
}