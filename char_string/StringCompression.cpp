// Leet code Problem : 443. String Compression

#include<iostream>
#include<vector>
#include <string>
using namespace std;

string compress(vector<char>& chars){
  string s = "";
  int i=0,count=1;
  while(i < chars.size()){
    s.push_back(chars[i]);
    int j=i+1;
    while(chars[i] == chars[j]){
      count++;
      j++;
    }
    i = j;
    string convert = to_string(count);
    if(count > 1)
      s.append(convert);
    count = 1;
  }

  return s;
}

int main() {

  // vector<char> chars = {'a','a','b','b','c','c','c'};
  // vector<char> chars = {'a'};
  vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
  string result = compress(chars);
  cout << result << endl;
  cout << result.length() << endl;
  return 0;
}