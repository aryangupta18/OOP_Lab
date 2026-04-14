#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator + (const Complex &c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    Complex operator - (const Complex &c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
    Complex operator * (const Complex &c) {
        Complex temp;
        temp.real = real * c.real;
        temp.imag = imag * c.imag;
        return temp;
    }
    Complex operator / (const Complex &c) {
        Complex temp;
        temp.real = real / c.real;
        temp.imag = imag / c.imag;
        return temp;
    }
    // prefix
    Complex operator ++() {
        real++;
        return *this;
    }
    // postfix
    Complex operator ++(int) {
        Complex temp = *this;
        this->real++;
        return temp;
    }
    // ==
    bool operator == (const Complex &c) {
        return (real == c.real && imag == c.imag);
    }
    // == for three objects
    // bool operator == (const Complex &c) {
    //     return (real == c.real && imag == c.imag);
    // }

    friend ostream& operator << (ostream &out, const Complex &c);
    friend istream& operator >> (istream &in, Complex &c);


    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

ostream& operator << (ostream &out, const Complex &c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

istream& operator >> (istream &in, Complex &c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

int main() {
    Complex c1, c2, c3;

    cin >> c1;
    cin >> c2;
    cin >> c3;

/*
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex pro = c1 * c2;
    Complex quo = c1 / c2;

    cout << "First complex number: " << c1 << endl;
    cout << "Second complex number: " << c2 << endl;
    cout << "sum using << operator: " << sum << endl;

    cout << "diff using << operator: " << diff << endl;

    cout << "pro using << operator: " << pro << endl;

    cout << "quo using << operator: " << quo << endl;

    cout << "Sum using display(): ";
    sum.display();

    cout << "Prefix increment: " << ++c1 << endl;
    cout << "Postfix increment: " << c1++ << endl;
    cout << "After postfix increment: " << c1 << endl;
*/
    cout << "Are c1 and c2 equal? " << (c1 == c2 ? "Yes" : "No") << endl;

    
    return 0;
}
