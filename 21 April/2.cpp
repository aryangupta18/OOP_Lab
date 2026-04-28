// create short and simple program and use short cout statements to display the results and use short vaiable names
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class Point {
private:
    double x, y, z;
public:
    Point(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
    double distanceFromOrigin() {
        return sqrt(x * x + y * y + z * z);
    }
    double distanceTo(const Point& other) {
        double dx = x - other.x;
        double dy = y - other.y;
        double dz = z - other.z;
        return sqrt(dx * dx + dy * dy + dz * dz);
    }
};
class Shape {
protected:
    Point center;
    double length, width, height;
public:
    Shape(Point c, double l, double w, double h) : center(c), length(l), width(w), height(h) {}
    virtual double volume() = 0;
    virtual double surfaceArea() = 0;
    virtual bool isInside(Point p) = 0;
};
class Cuboid : public Shape {
public:
    Cuboid(Point c, double l, double w, double h) : Shape(c, l, w, h) {}
    double volume() override {
        return length * width * height;
    }
    double surfaceArea() override {
        return 2 * (length * width + width * height + height * length);
    }
    bool isInside(Point p) override {
        return (p.distanceTo(center) < length / 2 && p.distanceTo(center) < width / 2 && p.distanceTo(center) < height / 2);
    }
};
class Cube : public Shape {
public:
    Cube(Point c, double l) : Shape(c, l, l, l) {}
    double volume() override {
        return length * length * length;
    }
    double surfaceArea() override {
        return 6 * length * length;
    }
    bool isInside(Point p) override {
        return (p.distanceTo(center) < length / 2);
    }
};
class Sphere : public Shape {
public:
    Sphere(Point c, double r) : Shape(c, r, r, r) {}
    double volume() override {
        return (4.0 / 3.0) * M_PI * length * length * length;
    }
    double surfaceArea() override {
        return 4 * M_PI * length * length;
    }
    bool isInside(Point p) override {
        return (p.distanceTo(center) < length);
    }
};
int main() {
    Cuboid c(Point(0, 0, 0), 2, 3, 4);
    Cube cu(Point(0, 0, 0), 2);
    Sphere s(Point(0, 0, 0), 2);
    cout << "Cuboid Volume: " << c.volume() << endl;
    cout << "Cuboid Surface Area: " << c.surfaceArea() << endl;
    cout << "Cube Volume: " << cu.volume() << endl;
    cout << "Cube Surface Area: " << cu.surfaceArea() << endl;
    cout << "Sphere Volume: " << s.volume() << endl;
    cout << "Sphere Surface Area: " << s.surfaceArea() << endl;
    Point p(1, 1, 1);
    cout << "Point is inside Cuboid: " << c.isInside(p) << endl;
    cout << "Point is inside Cube: " << cu.isInside(p) << endl;
    cout << "Point is inside Sphere: " << s.isInside(p) << endl;
    return 0;
}