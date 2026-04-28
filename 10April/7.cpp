#include <iostream>
using namespace std;

template <class T>
class Array {
    T *a;
    int n;

public:
    Array(int s) {
        n = s;
        a = new T[n];
    }

    ~Array() {
        delete[] a;
    }

    void input() {
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void last() {
        cout << a[n - 1] << endl;
    }

    void pos(int p) {
        cout << a[p - 1] << endl;
    }

    void rev() {
        for (int i = n - 1; i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;
    }

    void asc() {
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (a[i] > a[j])
                    swap(a[i], a[j]);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    void desc() {
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (a[i] < a[j])
                    swap(a[i], a[j]);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    void sum() {
        T s = 0;
        for (int i = 0; i < n; i++)
            s += a[i];
        cout << s << endl;
    }
};

int main() {
    int n, p;
    cout << "Enter size of array: ";
    cin >> n;

    Array<int> x(n);

    x.input();
    x.last();
    cout << "Enter position: ";
    cin >> p;
    x.pos(p);
    cout << "Reversed array: ";
    x.rev();
    cout << "Sorted array (ascending): ";
    x.asc();
    cout << "Sorted array (descending): ";
    x.desc();
    cout << "Sum of elements: ";
    x.sum();

    return 0;
}