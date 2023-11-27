#include<iostream>
#include<stack>
using namespace std;

int print_mid(stack<int> &st, int mid){
  // Base case
  if(mid <= 0){
    return st.top();
  }

  //Process
  int temp = st.top();
  st.pop();

  // Recursive Call
  int ans = print_mid(st, mid-1);
  st.push(temp);
  return ans;
}

int main(){

  stack<int> st;
  st.push(1);  
  st.push(2);  
  st.push(7);  
  st.push(4);
  st.push(5);
  st.push(6);

  int mid = (st.size()/2);

  if((st.size()%2) == 0){
    mid--;
  }

  cout << print_mid(st, mid) << endl;

  return 0;
}