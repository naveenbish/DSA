#include<iostream>
#include<stack>
using namespace std;

void insertST(stack<int> &st, int data){
  // base case
  if(st.empty() || (data > st.top())){
    st.push(data);
    return;
  }

  // process
  int temp = st.top();
  st.pop();

  // Recursive call
  insertST(st, data);
  st.push(temp);
}

// Print Stack
void print_stack(stack<int>& st){
  // Base case
  if(st.empty())
    return;

  // Process
  int temp = st.top();
  st.pop();

  // Recursive call
  print_stack(st);
  st.push(temp);
  cout << st.top() << " ";
}

int main(){

  stack<int> st;
  st.push(10);
  st.push(8);
  // st.push(20);
  // st.push(40);
  // st.push(50);
  // st.push(60);
  // st.push(70);

  int data = 6;
  print_stack(st);
  cout << endl;
  insertST(st, data);
  print_stack(st);

  return 0;
}