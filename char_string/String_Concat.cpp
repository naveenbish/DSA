// Incomplete
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

string concatStr(string s){
  string result = "";
  if(s[0] == '0' && s[1] == '0'){
    s[0] = '2';
    s[1] = '4';
  }
  if(s[3] == '0' && s[4] == '0'){
    s[3] = '6';
    s[4] = '0';
    
  }
  result = s.substr(0,2) + s.substr(3,4);
  return result;
}

int main() {
  vector<string> str = {"22:00", "00:00","21:59"};
  for(int i = 0;i<str.size();i++){
    cout << concatStr(str[i]) << " ";
  }
  cout << endl;
  return 0;
}