#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int roll, m1, m2, m3;
    Student() {
        name = "";
        roll = 0;
        m1 = m2 = m3 = 0;
    }
    Student(string n, int r, int a, int b, int c) {
        name = n;
        roll = r;
        m1 = a;
        m2 = b;
        m3 = c;
    }
    void input() {
        cin >> name >> roll >> m1 >> m2 >> m3;
    }
    float avg() {
        return (m1 + m2 + m3) / 3.0;
    }
    char grade() {
        float a = avg();
        if (a >= 90) return 'A';
        else if (a >= 75) return 'B';
        else if (a >= 50) return 'C';
        else return 'F';
    }
    void display() {
        cout << name << " " << roll << " " << avg() << " " << grade() << endl;
    }
};
class Group : public Student {
    Student s[100];
    int n;
public:
    Group() {
        n = 0;
    }
    void add() {
        s[n].input();
        n++;
    }
    void topper() {
        int t = 0;
        for (int i = 1; i < n; i++)
            if (s[i].avg() > s[t].avg())
                t = i;
        s[t].display();
    }
    void fail() {
        for (int i = 0; i < n; i++)
            if (s[i].grade() == 'F')
                s[i].display();
    }
    void del(string nm, int r) {
        for (int i = 0; i < n; i++) {
            if (s[i].name == nm || s[i].roll == r) {
                for (int j = i; j < n - 1; j++)
                    s[j] = s[j + 1];
                n--;
                break;
            }
        }
    }
};
int main() {
    Group g;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        g.add();
    cout << "Topper: ";    
    g.topper();
    cout << "\nFailing students: ";
    g.fail();
    string nm;
    int r;
    cout << "\nEnter name and roll number to delete: ";
    cin >> nm >> r;
    g.del(nm, r);
    return 0;
}