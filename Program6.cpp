#include <iostream>
using namespace std;
class vehicle {
 public:
  string colour;
  int max_speed;
  vehicle() {
    this->colour = " ";
    this->max_speed = 0;
  }
  int get_max_speed() { return max_speed; }
  void set_max_speed(int speed) { this->max_speed = speed; }
  void output() {
    cout << "Colour of the vehicle: " << colour << endl;
    cout << "Maximum speed of the vehicle: " << max_speed << endl;
  }
};
int main() {
  vehicle v1;
  v1.colour = "Black";
  v1.max_speed = 434;
  v1.output();
  return 0;
}