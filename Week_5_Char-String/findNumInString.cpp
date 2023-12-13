#include<iostream>
#include<string.h>
using namespace std;

int main() {
  string str1;
  string str2;
  cout << "Enter string one : "; getline(cin, str1);
  cout << "Enter string to be searched in previous String : "; getline(cin, str2);

  // cout << str1.find(str2) << endl;

  if(str1.find(str2) == string::npos)
    cout << "Not Found " << endl;
  else
    cout << "Found" << endl;

  return 0;
}