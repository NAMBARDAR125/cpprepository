#include <iostream>
#include <cmath>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double calculateArea() {
        return length * width;
    }
    double calculatePerimeter() {
        return 2 * (length + width);
    }
    void display() {
        cout << "--- Rectangle ---" << endl;
        cout << "Dimensions: " << length << " x " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl << endl;
    }
};
class Triangle {
private:
    double a, b, c;
public:
    // Constructor for three sides
    Triangle(double s1, double s2, double s3) {
        a = s1;
        b = s2;
        c = s3;
    }
    double calculatePerimeter() {
        return a + b + c;
    }
    double calculateArea() {
        double s = calculatePerimeter() / 2.0; // Semi-perimeter
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    void display() {
        cout << "--- Triangle ---" << endl;
        cout << "Sides: " << a << ", " << b << ", " << c << endl;
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            cout << "Perimeter: " << calculatePerimeter() << endl;
            cout << "Area (Heron's): " << calculateArea() << endl << endl;
        } 
        else {
            cout << "Error: Invalid triangle sides." << endl << endl;
        }
    }
};
int main() {
    Rectangle myRect(10.0, 5.0);
    Triangle myTri(3.0, 4.0, 5.0);
    myRect.display();
    myTri.display();
    return 0;
}