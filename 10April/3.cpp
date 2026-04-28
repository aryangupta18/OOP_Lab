#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double bal;

public:
    BankAccount(string n, double b) {
        name = n;
        bal = b;
    }

    void deposit(double a) {
        bal += a;
    }

    void withdraw(double a) {
        if (a <= bal)
            bal -= a;
        else
            cout << "Insufficient funds\n";
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Balance: " << bal << endl;
    }
};

int main() {
    BankAccount b("Aryan", 5000);

    b.deposit(2000);
    b.withdraw(3000);
    b.display();

    return 0;
}