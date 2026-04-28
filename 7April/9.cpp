#include <iostream>
using namespace std;
class Stack {
protected:
    int a[100], top;
public:
    Stack() { top = -1; }
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == 99; }
    void push(int x) {
        if (!isFull()) a[++top] = x;
    }
    int pop() {
        if (!isEmpty()) return a[top--];
        return -1;
    }
    int peek() {
        if (!isEmpty()) return a[top];
        return -1;
    }
};
class Complex {
public:
    int real, imag;
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
};
class ComplexStack : public Stack {
    Complex c[100];
    int t;
public:
    ComplexStack() { t = -1; }
    void push(Complex x) {
        if (t < 99) c[++t] = x;
    }
    Complex pop() {
        if (t >= 0) return c[t--];
        return Complex();
    }
    Complex peek() {
        if (t >= 0) return c[t];
        return Complex();
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << "pop: " << s.pop() << endl;
    cout << "peek: " << s.peek() << endl;
    ComplexStack cs;
    cs.push(Complex(2, 3));
    Complex x = cs.peek();
    cout << x.real << " + " << x.imag << "i";
    return 0;
}