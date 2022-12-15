#include <iostream>
using namespace std;
class DistF;
class DistM {
 public:
  float metres;
  float centimetres;
  DistM()  // default constructor
  {
    metres = 0;
    centimetres = 0;
  }
  void read() {
    cout << "Enter metres: ";
    cin >> metres;
    cout << "Enter centimetres: ";
    cin >> centimetres;
  };
  void show() {
    cout << "Metres: " << metres << endl;
    cout << "Centimetres: " << centimetres << endl;
  }
  friend DistM add(DistM, DistF);
};

class DistF {
 public:
  float feet;
  float inches;
  DistF()  // default constructor
  {
    feet = 0;
    inches = 0;
  }
  void read() {
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
  }
  void show() {
    cout << "Feet: " << feet << endl;
    cout << "Inches: " << inches << endl;
  }
  friend DistM add(DistM, DistF);
};
DistM add(DistM D1, DistF D2) {
  DistM D3;
  D3.metres = D1.metres + D2.feet * 0.3048;
  D3.centimetres = D1.centimetres + D2.inches * 2.54;
  return D3;
}
int main() {
  DistM D1;
  DistF D2;
  DistM D3;
  D1.read();
  D2.read();
  D3 = add(D1, D2);
  D3.show();
  return 0;
}