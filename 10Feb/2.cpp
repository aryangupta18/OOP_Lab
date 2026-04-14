#include <iostream>
using namespace std;

class Time {
private:
    int hr, min;

public:
    Time(int h = 0, int m = 0) {
        hr = h;
        min = m;
    }

    Time operator + (const Time &c) {
        Time temp;
        temp.hr = hr + c.hr;
        temp.min = min + c.min;
        if(temp.min>=60){
            temp.hr += 1;
            temp.min = temp.min%60;
        }
        return temp;
    }
    Time operator - (const Time &c) {
        Time temp;
        temp.hr = hr - c.hr;
        temp.min = min - c.min;
        return temp;
    }
    Time operator * (const Time &c) {
        Time temp;
        temp.hr = hr * c.hr;
        temp.min = min * c.min;
        if(temp.min>=60){
            temp.hr += 1;
            temp.min = temp.min%60;
        }
        return temp;
    }
    Time operator / (const Time &c) {
        Time temp;
        temp.hr = hr / c.hr;
        temp.min = min / c.min;
        return temp;
    }
    // prefix
    Time operator ++() {
        hr++;
        return *this;
    }
    // postfix
    Time operator ++(int) {
        Time temp = *this;
        this->hr++;
        return temp;
    }
    // ==
    bool operator == (const Time &c) {
        return (hr == c.hr && min == c.min);
    }
    friend ostream& operator << (ostream &out, const Time &c);
    friend istream& operator >> (istream &in, Time &c);


    void display() {
        cout << hr << " hrs " << min << "mins" << endl;
    }
};

ostream& operator << (ostream &out, const Time &c) {
    out << c.hr << " hrs " << c.min << "mins";
    return out;
}

istream& operator >> (istream &in, Time &c) {
    cout << "Enter hr part: ";
    in >> c.hr;
    cout << "Enter mininary part: ";
    in >> c.min;
    return in;
}

int main() {
    Time c1, c2;

    cin >> c1;
    cin >> c2;

    Time sum = c1 + c2;
    Time diff = c1 - c2;
    Time pro = c1 * c2;
    Time quo = c1 / c2;

    cout << "First Time number: " << c1 << endl;
    cout << "Second Time number: " << c2 << endl;
    
    cout << "sum using << operator: " << sum << endl;

    cout << "diff using << operator: " << diff << endl;

    cout << "pro using << operator: " << pro << endl;

    cout << "quo using << operator: " << quo << endl;

    cout << "Prefix increment: " << ++c1 << endl;
    cout << "Postfix increment: " << c1++ << endl;
    cout << "After postfix increment: " << c1 << endl;

    return 0;
}
