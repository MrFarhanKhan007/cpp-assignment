#include <iostream>
using namespace std;

class shape {
 public:
  float radius, length, width;
  shape()  // default constructor
  {
    this->radius = 0;
    this->length = 0;
    this->width = 0;
  }
  float R_perimeter() { return (2*(length + width)); }
  ~shape() { cout << "This is a statement by Destructor" << endl; };
  float C_perimeter() { return (2 * 3.14 * radius); }
};

int main() {
  shape s1;
  s1.length = 83.22;
  s1.width = 45.32;
  s1.radius = 54.10;
  cout << "Perimeter  of the rectangle is: " << s1.R_perimeter() << endl;
  cout << "Perimeter  of the circle is: " << s1.C_perimeter() << endl;
  return 0;
}