#include<iostream>
using namespace std;

// Steps

// top = -1;

// Push()
// top++; arr[top] = data;

// Pop()
// top--;

// Empty()
// top == -1; empty

// getTop()
// return arr[top]

// getSize()
// size = top + 1;

// We also got conditions for overflow and underflow.


class Stack{
  public:
    int* arr;
    int size;
    int top;

    Stack(int size) {
      arr = new int[size];
      this->size = size;
      this->top = -1;
    }

    void push(int data){
      if(top == size-1){
        cout << "Stack overflow" << endl;
      }else{
        top++;
        arr[top] = data;
      }
    }

    void pop() {
      if(top == -1){
        cout << "Stack underflow" << endl;
        return;
      }
      else
        top--;
    }

    bool isEmpty() {
      if(top == -1)
        return true;
      else
        return false;
    }

    void getTop(){
      if(top == -1)
        cout << "Stack is empty" << endl;
      else
        cout << "top : " << arr[top];
      cout << endl;
    }

    int getSize(){
      return top+1;
    }

    void printSt(){
      cout << "Stack : ";
      for(int i = 0;i<getSize();i++){
        cout << arr[i] << " ";
      }cout << endl;
    }
};

int main(){
  Stack st(8);
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.pop();
  st.getTop();
  if(st.isEmpty())
    cout << "Empty" << endl;
  else
    cout << "Not Empty" << endl;
  cout << "Size : " << st.getSize() << endl;
  st.printSt();
  return 0;
}