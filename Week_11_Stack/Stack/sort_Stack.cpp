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


// sort stack
void sort_stack(stack<int>& st){
  // base case
  if(st.empty()){
    return;
  }
  
  // process
  int temp = st.top();
  st.pop();

  // Recursive call
  sort_stack(st);
  insertST(st,temp);
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
  st.push(70);
  st.push(20);
  st.push(50);
  st.push(30);
  st.push(10);
  st.push(40);
  st.push(60);

  int data = 30;
  print_stack(st);
  if(st.empty())
    cout << "Stack is empty";
  else
    sort_stack(st);

  cout << endl;
  print_stack(st);

  return 0;
}