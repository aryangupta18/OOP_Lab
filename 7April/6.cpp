#include <iostream>
#include <cmath>
using namespace std;

class Distance {
private:
    int ft;
    float inch;

public:
    Distance() : ft(0), inch(0) {}
    Distance(int f, float i) : ft(f), inch(i) {}

    void convertToMeters() {
        float tinch = ft * 12 + inch;
        float meters = tinch * 0.0254;
        cout << meters << " m" << endl;
    }

    Distance add_distance(const Distance& d) {
        int totalft = ft + d.ft;
        float tinch = inch + d.inch;
        if (tinch >= 12) {
            totalft += static_cast<int>(tinch / 12);
            tinch = fmod(tinch, 12);
        }
        return Distance(totalft, tinch);
    }

    Distance sub_distance(const Distance& d) {
        int totalft = ft - d.ft;
        float tinch = inch - d.inch;
        if (tinch < 0) {
            totalft--;
            tinch += 12;
        }
        return Distance(totalft, tinch);
    }

    void display() const {
        cout << "Distance: " << ft << " ft " << inch << " in" << endl;
    }
};

int main() {
    Distance d1(5, 8.5);
    Distance d2(3, 4.2);

    cout << "\nConverting Distance 1 to meters:\n";
    d1.convertToMeters();

    cout << "\nAdding Distance 1 and Distance 2:\n";
    Distance d3 = d1.add_distance(d2);
    d3.display();

    cout << "\nSubtracting Distance 2 from Distance 1:\n";
    Distance d4 = d1.sub_distance(d2);
    d4.display();

    return 0;
}