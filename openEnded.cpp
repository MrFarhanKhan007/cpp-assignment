#include <iostream>

using namespace std;

int divide(int a, int b) {
  if (b == 0) {
    throw "ERR: Division by zero";
  }

  if (a % b != 0) {
    throw "ERR: Division is not exact";
  }

  return a / b;
}

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  try {
    cout << "Result: " << divide(a, b) << endl;
  } catch (const char *err) {
    cout << err << endl;
  }

  return 0;
}
