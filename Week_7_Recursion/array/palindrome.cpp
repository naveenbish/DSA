#include<bits/stdc++.h>
using namespace std;

bool f(int i, string s){
  if(i >= s.size()/2) return true;
  if(s[i] != s[s.size() - 1 - i]) return false;
  return f(i+1, s);
}

int main() {
  /*vector<int> arr = {1,2,3,4,5};*/
  string s = "ROSO";
  cout << f(0, s) << endl;
  return 0;
}
