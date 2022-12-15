/* 5.	Write a program in which length is measured in feet and inches. User
enters two values of lengths then a menu will be displayed for performing the
following operations on it. Use operator overloading for all the functions: 1.
Add two lengths: + operator 2.	Compare the lengths using < operator 3. Compare
the lengths using == operator
4.	Use *= operator to multiply the length with given integer value
*/

#include <iostream>
using namespace std;

class length {
 public:
  int feet;
  int inches;
  length() {
    feet = 0;
    inches = 0;
  }
  void get() {
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
  }
  void show() {
    cout << "Feet: " << feet << endl;
    cout << "Inches: " << inches << endl;
  }
  length operator+(length l) {
    length temp;
    temp.feet = feet + l.feet;
    temp.inches = inches + l.inches;
    return temp;
  }
  length operator*(int n) {
    length temp;
    temp.feet = feet * n;
    temp.inches = inches * n;
    return temp;
  }
  length operator==(length l) {
    length temp;
    if (feet == l.feet && inches == l.inches) {
      cout << "Both lengths are equal" << endl;
    } else {
      cout << "Both lengths are not equal" << endl;
    }
    return temp;
  }
  length operator<(length l) {
    length temp;
    if (feet < l.feet && inches < l.inches) {
      cout << "Length 1 is less than length 2" << endl;
    } else {
      cout << "Length 1 is greater than length 2" << endl;
    }
    return temp;
  }
};

int main() {
  string choice;

  cout << "Hello, welcome to the length calculator" << endl;
  cout << "Today's menu is: " << endl;
  cout << "1. Add two lengths: + operator" << endl;
  cout << "2. Compare the lengths using < operator" << endl;
  cout << "3. Compare the lengths using == operator" << endl;
  cout << "4. Use *= operator to multiply the length with given integer value"
       << endl;
  cout << "Please enter your choice: ";
  cin >> choice;
  if (choice == "1") {
    length l1, l2, l3;
    l1.get();
    l2.get();
    l3 = l1 + l2;
    l3.show();
  } else if (choice == "2") {
    length l1, l2;
    l1.get();
    l2.get();
    l1 < l2;
  } else if (choice == "3") {
    length l1, l2;
    l1.get();
    l2.get();
    l1 == l2;
  } else if (choice == "4") {
    length l1;
    int n;
    l1.get();
    cout << "Enter the number you want to multiply the length by: ";
    cin >> n;
    l1 = l1 * n;
    l1.show();
  } else {
    cout << "Invalid choice" << endl;
  }
}
