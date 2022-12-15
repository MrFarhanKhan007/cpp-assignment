#include <string.h>

#include <iostream>
using namespace std;

class String {
 public:
  string sample;
  String() {}
  String(string) { this->sample = sample; }
};
int main() {
  String s1;
  String s2;
  s1.sample = "Amity";
  s2.sample = "University";
  String s3;
  s3.sample;
  s3 = s1;
  cout << s3.sample << endl;               // a part
  cout << s2.sample.substr(0, 4) << endl;  // b part
  cout << s2.sample.compare(s1.sample);    // c part

  return 0;
} 