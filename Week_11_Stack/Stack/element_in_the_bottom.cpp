#include<iostream>
#include<stack>
using namespace std;

// Done

void ele_btm(stack<char>& st,char data){
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

void print_stack(stack<char>& st, int size){
  // Base case
  if(size <= 0)
    return;

  // Process
  int temp = st.top();
  st.pop();

  // Recursive call
  print_stack(st, size-1);
  st.push(temp);
  cout << st.top() << " ";
}

int main(){

  stack<char> st;
  string str = "Naveen";
  char data = 'B';

  for(char ch : str)
    st.push(ch);

  print_stack(st,st.size());
  cout << endl;
  ele_btm(st,data);
  print_stack(st,st.size());
  return 0;
}