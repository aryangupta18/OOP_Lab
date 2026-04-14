#include <iostream>
using namespace std;

class Fraction {
private:
    int n, d;

public:
    Fraction(int n1 = 0, int d1 = 1) {
        n = n1;
        d = d1;
    }

    Fraction operator + (const Fraction &c) {
        Fraction temp;
        if(d == c.d){
            temp.n = n + c.n;
            temp.d = d;
        }
        
        temp.n = n*c.d + c.n*d;
        temp.d = d * c.d;
        return temp;
    }
    Fraction operator - (const Fraction &c) {
        Fraction temp;
        temp.n = n*c.d - c.n*d;
        temp.d = d * c.d;
        if(d == c.d){
            temp.n = n - c.n;
            temp.d = d;
        }
        return temp;
    }
    Fraction operator * (const Fraction &c) {
        Fraction temp;
        temp.n = n * c.n;
        temp.d = d * c.d;
        return temp;
    }
    Fraction operator / (const Fraction &c) {
        Fraction temp;
        temp.n = n * c.d;
        temp.d = d * c.n;
        return temp;
    }
    // prefix
    Fraction operator ++() {
        n = n+d;
        return *this;
    }
    // postfix
    Fraction operator ++(int) {
        Fraction temp = *this;
        this->n += this->d;
        return temp;
    }
    // ==
    bool operator == (const Fraction &c) {
        return (n == c.n && d == c.d);
    }
    friend ostream& operator << (ostream &out, const Fraction &c);
    friend istream& operator >> (istream &in, Fraction &c);


    void display() {
        cout << n << " / " << d << endl;
    }
};

ostream& operator << (ostream &out, const Fraction &c) {
    out << c.n << " / " << c.d ;
    return out;
}

istream& operator >> (istream &in, Fraction &c) {
    cout << "Enter numerator part: ";
    in >> c.n;
    cout << "Enter denominator part: ";
    in >> c.d;
    if(c.d == 0){
        cout << "Denominator cannot be zero!" << endl;
        exit(1);
    }
    return in;
}

int main() {
    Fraction c1, c2;

    cin >> c1;
    cin >> c2;

    Fraction sum = c1 + c2;
    Fraction diff = c1 - c2;
    Fraction pro = c1 * c2;
    Fraction quo = c1 / c2;

    cout << "First Fraction number: " << c1 << endl;
    cout << "Second Fraction number: " << c2 << endl;
    
    cout << "sum using << operator: " << sum << endl;

    cout << "diff using << operator: " << diff << endl;

    cout << "pro using << operator: " << pro << endl;

    cout << "quo using << operator: " << quo << endl;

    cout << "comparing c1 and c2: " << (c1 == c2 ? "Equal" : "Not Equal") << endl;

    cout << "Prefix increment: " << ++c1 << endl;
    cout << "Postfix increment: " << c1++ << endl;
    cout << "After postfix increment: " << c1 << endl;
    return 0;
}
