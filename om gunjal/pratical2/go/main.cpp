#include <iostream>
using namespace std;
#define MAX_SIZE 15
class stack
{
private:
  int top;
  int arr[MAX_SIZE];

public:
  stack()
  {
    top = -1;
  }
  bool push(int x)
  {
    if (isFull())
    {
      cout << "stack overflow" << endl;
      return false;
    }
    arr[++top] = x;
    return true;
  }
  int pop()
  {
    if (isEmpty())
    {
      cout << "stack overflow" << endl;
      return 0;
    }
    return arr[top--];
  }
  int peek()
  {
    if (isEmpty())
    {
      cout << "stack soi  empty" << endl;
      return 0;
    }
    return arr[top];
  }
  bool isEmpty()
  {
    return (top < 0);

    bool isFull()
    {
      return (top >= MAX_SIZE - 1);
    }
    void display()
    {
      if (top < 0)
      {
        cout << "stack is empty" << endl;
        return;
      }
      cout << "stack elements";
      for (int i = top; i >= 0; i++)
        cout << arr[i] << " " cout << endl;
    }
    void reverse()
    {
      int n = top + 1;
      int *tmp = new int[n];
      for (int i = 0; i < n; i++)
      {
        tmp[i] = arr[top--];
      }
      for(int i=0;i<n;i++){
        push(tmp[i]);
      }
      delete[]tmp;
    }
  }
};

int main(){
  stack stk;
  cot<<"input some elment in stack"<<endl;
  stk.push(7);
  stk.push(4);
  stk.push(2);
  stk.push(5);
  stk.push(1);
  stk.push(0);
  stk.display();

  return 0;
}
