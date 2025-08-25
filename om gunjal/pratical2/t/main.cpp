#include <iostream>
using namespace std;

#define MAX_SIZE 15

class Stack {
private:
  int top;
  int arr[MAX_SIZE];

public:
  Stack() {
    top = -1;
  }

  bool isFull() {
    return (top >= MAX_SIZE - 1);
  }

  bool isEmpty() {
    return (top < 0);
  }

  bool push(int x) {
    if (isFull()) {
      cout << "Stack overflow" << endl;
      return false;
    }
    arr[++top] = x;
    return true;
  }

  int pop() {
    if (isEmpty()) {
      cout << "Stack underflow" << endl;
      return 0;
    }
    return arr[top--];
  }

  int peek() {
    if (isEmpty()) {
      cout << "Stack is empty" << endl;
      return 0;
    }
    return arr[top];
  }

  void display() {
    if (isEmpty()) {
      cout << "Stack is empty" << endl;
      return;
    }
    cout << "Stack elements : ";
    for (int i = top; i >= 0; i--) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  void reverse() {
    if (isEmpty()) {
      cout << "Cannot reverse an empty stack." << endl;
      return;
    }
    int n = top + 1;
    int* tmp = new int[n];
    for (int i = 0; i < n; i++) {
      tmp[i] = pop();
    }
    for (int i = 0; i < n; i++) {
      push(tmp[i]);
    }
    delete[] tmp;
  }
};

int main() {
  Stack stk;
  cout << "Input some elements in stack..." << endl;

  stk.push(7);
  stk.push(4);
  stk.push(2);
  stk.push(5);
  stk.push(1);
  stk.push(0);

  stk.display();
  cout << "Reversing..." << endl;
  stk.reverse();
  stk.display();
  cout << " pushing more elments..." << endl;
  stk.push(-1);
  stk.push(10);
  stk.display();
  cout << "Again reversing..." << endl;
  stk.reverse();
  stk.display();

  return 0;
}
