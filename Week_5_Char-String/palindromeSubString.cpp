// failed to do this again...
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int odd(string s,int i){
  int j = i;
  int count = 0;
  while(i>=0 && j < s.size()){
    if(s[i] == s[j])
      count++;
    i--;
    j++;
  }
  return count;
}
int even(string s){
  int i = 0;
  int j = i+1;
  int count = 0;
  while(j < s.size()){
    if(s[i] == s[j])
      count++;
    
    i++;
    j++;
  }
  return count;
}

int main() {
  string s = "aaaaa";
  int i = 0;
  int count = 0;
  while(i<s.size()){
    count = count + odd(s, i);
    i++;
  }
  cout << "odd : " << count << endl;
  count = even(s) + count;
  cout << "even : " << even(s) << endl;
  cout << "count : " << count << endl;
  return 0;
}