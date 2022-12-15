// Write a program to swap two numbers (create two classes) by using Friend
// function.
#include <iostream>
using namespace std;
class B;
class A {
  int a;

 public:
  void getdata() {
    cout << "Enter First Number : ";
    cin >> a;
  }
  void showdata() { cout << "The value of First Number is :" << a << endl; }
  friend void swap(A, B);
};
class B {
  int b;

 public:
  void getdata() {
    cout << "Enter Second Number :";
    cin >> b;
  }
  void showdata() { cout << "The value of Second Number is : " << b << endl; }
  friend void swap(A, B);
};
void swap(A x, B y) {
  int temp;
  temp = x.a;
  x.a = y.b;
  y.b = temp;
  cout << "After swapping the value of First Number is : " << x.a << endl;
  cout << "After swapping the value of Second Number is : " << y.b << endl;
}
int main() {
  A a1;
  B b1;
  a1.getdata();
  b1.getdata();
  swap(a1, b1);

  return 0;
}