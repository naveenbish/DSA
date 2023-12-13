#include<iostream>
#include<stack>
using namespace std;

void ele_btm(stack<int>& st,char data){
  // Base case
  if(st.empty()){
    st.push(data);
    return ;
  }

  //Process
  int temp = st.top();
  st.pop();

  // Recursive Call
  ele_btm(st, data);
  st.push(temp);
}

void reverseSt(stack<int> &st){
  // Base case
  if(st.empty()){
    return ;
  }

  //Process
  int temp = st.top();
  st.pop();

  // Recursive Call
  reverseSt(st);
  ele_btm(st,temp);
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
  st.push(20);  
  st.push(30);  
  st.push(40);
  st.push(50);
  st.push(60);

  print_stack(st);
  cout << endl;
  reverseSt(st);
  print_stack(st);


  return 0;
}