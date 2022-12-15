#include <iostream>
using namespace std;

class Student {
 public:
  string name;
  int roll_number;
  int age;
  Student()  // default constructor
  {
    name = " ";
    roll_number = 0;
    age = 0;
  }
  void getinfo() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll_number;
    cout << "Enter age: ";
    cin >> age;
  }
  void showinfo() {
    cout << "Name: " << name << endl;
    cout << "Roll number: " << roll_number << endl;
    cout << "Age: " << age << endl;
  }
};
class Exam : public Student {
 public:
  float Marks_in_DSA;    // Data structures in C
  float Marks_in_OOPS;   // Object Oriented Programming in Cpp
  float Marks_in_Maths;  // applied mathematics-III
  float Marks_in_DECO;   // Digital Electronics and Computer Organization
  float Marks_in_MATS;   // Material Science
  float Marks_in_BEE;    // basic electronic engineering
  Exam()                 // default constructor
  {
    Marks_in_DSA = 0;
    Marks_in_OOPS = 0;
    Marks_in_Maths = 0;
    Marks_in_DECO = 0;
    Marks_in_MATS = 0;
    Marks_in_BEE = 0;
  }

  void getmarks() {
    cout << "Enter Marks of DSA(out of 100): " << endl;
    cin >> Marks_in_DSA;
    cout << "Enter Marks of OOPS(out of 100): " << endl;
    cin >> Marks_in_OOPS;
    cout << "Enter Marks of Maths(out of 100): " << endl;
    cin >> Marks_in_Maths;
    cout << "Enter Marks of Deco(out of 100): " << endl;
    cin >> Marks_in_DECO;
    cout << "Enter Marks of MATS(out of 100): " << endl;
    cin >> Marks_in_MATS;
    cout << "Enter Marks of BEE(out of 100): " << endl;
    cin >> Marks_in_BEE;
  }
  void showmarks() {
    cout << "Marks in DSA: " << Marks_in_DSA << endl;
    cout << "Marks in OOPS: " << Marks_in_OOPS << endl;
    cout << "Marks in Maths: " << Marks_in_Maths << endl;
    cout << "Marks in Deco: " << Marks_in_DECO << endl;
    cout << "Marks in MATS: " << Marks_in_MATS << endl;
    cout << "Marks in BEE: " << Marks_in_BEE << endl;
  }
};

class Results : public Exam {
 public:
  float total_marks;
  float percentage;
  void total() {
    total_marks = (Marks_in_DSA + Marks_in_OOPS + Marks_in_Maths +
                   Marks_in_DECO + Marks_in_MATS + Marks_in_BEE);
    percentage = ((total_marks / 600) * 100);
  }

  Results()  // default constructor
  {
    total_marks = 0;
  }

  void finalresult() {
    cout << "Name: " << name << endl;
    cout << "Roll number: " << roll_number << endl;
    cout << "Age: " << age << endl;
    cout << "Marks in DSA: " << Marks_in_DSA << endl;
    cout << "Marks in OOPS: " << Marks_in_OOPS << endl;
    cout << "Marks in Maths: " << Marks_in_Maths << endl;
    cout << "Marks in Deco: " << Marks_in_DECO << endl;
    cout << "Marks in MATS: " << Marks_in_MATS << endl;
    cout << "Marks in BEE: " << Marks_in_BEE << endl;
    cout << "Total Marks Achieved (out 0f 600): " << total_marks << "/600"
         << endl;
    cout << "Percentage achieved: " << percentage << "%" << endl;
  }
};

int main() {
  Results Farhan;
  Farhan.getinfo();
  Farhan.getmarks();
  Farhan.total();
  Farhan.finalresult();
  return 0;
}