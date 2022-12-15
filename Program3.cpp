#include <iostream>
using namespace std;
float area(float);
double area(double, double);
float area(float, float);

int main() {
  double length, breadth;
  float radius;
  float base, height;
  char choice;

  cout << "Enter your choice: "
       << endl;  // c for circle, r for rectangle, t for triangle
  cin >> choice;
  if (choice == 'c') {
    cout << "Enter radius of the circle: " << endl;
    cin >> radius;
    cout << "Area of the circle is: " << area(radius) << endl;
  } else if (choice == 'r') {
    cout << "Enter length and breadth of the rectangle: " << endl;
    cin >> length >> breadth;
    cout << "Area of the rectangle is: " << area(length, breadth) << endl;
  } else if (choice == 't') {
    cout << "Enter base and height of the triangle: " << endl;
    cin >> base >> height;
    cout << "Area of the triangle is: " << area(base, height) << endl;
  } else {
    cout << "Invalid choice" << endl;
  }

  return 0;
}
float area(float radius) { return (3.14 * radius * radius); }
double area(double length, double breadth) { return (length * breadth); }
float area(float base, float height) { return (0.5 * base * height); }