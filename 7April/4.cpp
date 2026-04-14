#include <iostream>
#include <cmath>
using namespace std;

class Polar {
private:
    double r; 
    double theta; 
public:
    Polar() : r(0), theta(0) {}
    Polar(double radius, double angle) : r(radius), theta(angle) {}

    void toRectangular(double &x, double &y) const {
        x = r * cos(theta);
        y = r * sin(theta);
    }

    Polar operator+(const Polar &other) const {
        double x1, y1, x2, y2;
        this->toRectangular(x1, y1);
        other.toRectangular(x2, y2);
        double new_x = x1 + x2;
        double new_y = y1 + y2;
        double new_r = sqrt(new_x * new_x + new_y * new_y);
        double new_theta = atan2(new_y, new_x);
        return Polar(new_r, new_theta);
    }

    friend std::ostream &operator<<(std::ostream &os, const Polar &p) {
        os << "Polar(" << p.r << ", " << p.theta << ")";
        return os;
    }

    friend std::istream &operator>>(std::istream &is, Polar &p) {
        is >> p.r >> p.theta;
        return is;
    }
};

int main() {
    Polar p1, p2;
    cout << "Enter first polar point: ";
    cin >> p1;
    cout << "Enter second polar point: ";
    cin >> p2;

    Polar p3 = p1 + p2;

    cout << "Sum of Polar Points: " << p3 << endl;

    return 0;
}