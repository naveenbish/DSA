#include<iostream>
#include<stack>
using namespace std;

// Stack : It is based on LIFO -> Last in first OUT.
// Stack underflow & overflow 
// We can also use STL (standard library of c++) to create stack.
// we will also learn How to create it manually from scratch.
// use #include<stack> // Create it like stack<int> st;stack<char> st;stack<string> st;stack<node> st;
// Add st.push(10); st.pop(); st.empty(); st.size(); st.top();

// Stack underflow : if there is no element in stack and you wanna pop() then this will occure.

// Stack overflow : if the size of stack gets filled and you wanna push() then this will occure.

int main(){
  stack<int> st;

  // Add in stack
  st.push(10);
  st.push(20);
  st.push(30);

  // check size
  cout << "Size : " << st.size() << endl;

  // remove
  st.pop();

  // Check it empty
  if(st.empty()){
    cout << "Stack is empty" << endl;
  }else{
    cout << "Stack is not empty" << endl;
  }

  // Print the Top value in Stack
  cout << "Top value of stack : " << st.top() << endl;


  return 0;
}