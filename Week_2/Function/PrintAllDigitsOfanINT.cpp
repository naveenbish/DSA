#include<iostream>
using namespace std;

void BreakAnINT(int n){
  
  // Base call
  if(n <= 0)
    return ;  

  // process
  int ans = n%10;
  
  // Recursive Call
  BreakAnINT(n/10);
  cout << ans << " ";
  
}

int main() {
  int n;
  cin >> n;
  BreakAnINT(n);

  return 0;
}