#include <iostream>
using namespace std;
class Product {
public:
    string type;
    int price;
    Product() {
        type = "";
        price = 0;
    }
    void input() {
        cin >> type >> price;
    }
    void display() {
        cout << type << " " << price << endl;
    }
};
class Cart : public Product {
    Product p[100];
    int n;
public:
    Cart() {
        n = 0;
    }
    void add() {
        p[n].input();
        n++;
    }
    void del(string t) {
        for (int i = 0; i < n; i++) {
            if (p[i].type == t) {
                for (int j = i; j < n - 1; j++)
                    p[j] = p[j + 1];
                n--;
                break;
            }
        }
    }
    void bill() {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            p[i].display();
            sum += p[i].price;
        }
        cout << "Total Bill = " << sum << endl;
    }
};
int main() {
    Cart c;
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        c.add();
    string t;
    cout << "Enter product type to delete: ";
    cin >> t;
    c.del(t);
    c.bill();
    return 0;
}