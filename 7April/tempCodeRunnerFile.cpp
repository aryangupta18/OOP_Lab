#include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
    double a, b;
public:
    void get_data(double d1, double d2) {
        a = d1;
        b = d2;
    }
    virtual void display_area() = 0; 
};

class Triangle : public Shape {
public:
    void display_area() {
        double area = 0.5 * a * b;
        cout << "Area of Triangle: " << area << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() {
        double area = a * b;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Shape* shape;
    double d1, d2;

    shape = new Triangle();
    cout << "Enter base and height of the triangle: ";
    cin >> d1 >> d2;

    shape->get_data(d1, d2);
    shape->display_area();

    delete shape;

    shape = new Rectangle();
    cout << "Enter length and width of the rectangle: ";
    cin >> d1 >> d2;

    shape->get_data(d1, d2);
    shape->display_area();

    delete shape;
    return 0;
}