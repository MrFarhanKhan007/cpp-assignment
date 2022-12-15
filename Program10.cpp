#include <iostream>
using namespace std;
#define SIZE 10 //size of the stack

template <class T>

class Stack {
 public:
  Stack();         // empty contructor
  void push(T k);  // inserting an element
  T pop();         // deleting an element
  T topElement();  // element at top of the stack
  bool isFull();   // is stack full?
  bool isEmpty();  // is stack empty?
  int top;
  T s[SIZE];  // generic stack
};

template <class T>
Stack<T>::Stack() {
  top = -1;
}

template <class T>
void Stack<T>::push(T k) {
  if (isFull()) {
    cout << "No more element can be inserted into the stack!" << endl;
  }

  else {
    cout << "Inserted element " << k << endl;
    top = top + 1;
    s[top] = k;
  }
}
template <class T>
T Stack<T>::pop() {
  T popped_element = s[top];
  top = top - 1;
  return popped_element;
}

template <class T>
bool Stack<T>::isEmpty() {
  if (top = -1) {
    return 1;
  } else {
    return 0;
  }
}

template <class T>
bool Stack<T>::isFull() {
  if (top == (SIZE - 1)) {
    return 1;
  } else {
    return 0;
  }
}

template <class T>
T Stack<T>::topElement() {
  T top_element = s[top];
  return top_element;
}

int main() {
  Stack<int> S_int;
  Stack<string> S_string;
  S_int.push(65);
  S_int.push(23);
  S_int.push(11);
  S_int.push(32);
  S_int.push(76);

  cout << "Element " << S_int.pop() << " is popped from the stack." << endl;
  cout << "Top element is " << S_int.topElement() << endl;

  S_string.push("Farhan");
  S_string.push("Bob");
  S_string.push("Mark");
  S_string.push("Michael");
  S_string.push("Mitchell");
  S_string.push("John");

  cout << "Element " << S_string.pop() << " is popped from the stack." << endl;
  cout << "Top element is " << S_string.topElement() << endl;
  return 0;
}