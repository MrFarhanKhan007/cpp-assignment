#include <iostream>
using namespace std;

class media {
 public:
  string title;        // title of the media
  string publication;  // publication of the media

  virtual void read() {
    cout << "Enter name of the media you want to purchase: " << endl;
    cin >> title;
    cout << "Enter the publication of the media: " << endl;
    cin >> publication;
  }

  virtual void show() {
    cout << "Name of the media: " << title << endl;
    cout << "Publication of the media: " << publication << endl;
  }
};

class book : public media {
 public:
  int pages;                                  // number of pages
  book() { this->pages = 0; }                 // default constructor
  book(int number) { this->pages = number; }  /// parametrized constructor
  void number_of_pages() {
    cout << "Enter number of pages: " << endl;
    cin >> pages;
  }
  void read() {
    cout << "Enter name of the book you want to buy: " << endl;
    cin >> title;
    cout << "Enter name of the publication of the book: " << endl;
    cin >> publication;
  }
  void show() {
    cout << "Name of the book: " << title << endl;
    cout << "Publication of the book: " << publication << endl;
    cout << "Number of pages in the book: " << pages << endl;
  }
};

class tapes : public media {
 public:
  int p_time;                               // playing time
  tapes() { this->p_time = 0; }             // default constructor
  tapes(int time) { this->p_time = time; }  /// parametrized constructor
  void playing_time() {
    cout << "Enter playing time of the tapes (in minutes): " << endl;
    cin >> p_time;
  }
  void read() {
    cout << "Enter name of the tapes you want to buy: " << endl;
    cin >> title;
    cout << "Enter name of the publication of the tapes: " << endl;
    cin >> publication;
  }
  void show() {
    cout << "Name of the tapes: " << title << endl;
    cout << "Publication of the tapes: " << publication << endl;
    cout << "Playing time of the tapes: " << p_time << endl;
  }
};

int main() {
  string bname;      // name of the book
  string tapesname;  // name of the tapes
  string choice;     //

  media *m1;  // base pointer
  media base;
  m1 = &base;  // base adddress

  cout << "Enter your choice: " << endl;
  cin >> choice;  // getting the choice from the user whether he wants to buy a
                  // book or tapes

  if (choice == "book") {
    book b1;  // object of class book
    m1 = &b1;
    m1->read();  // accessing functions of derived class
    b1.number_of_pages();
    m1->show();
  } else if (choice == "tapes") {
    tapes c1;  // object of class tapes
    m1 = &c1;
    m1->read();  // same done here
    c1.playing_time();
    m1->show();
  } else {
    cout << "Invalid" << endl;  // printing invalid if the choice by the user
                                // doesn't match the items present in the shop
  }
  return 0;
}
