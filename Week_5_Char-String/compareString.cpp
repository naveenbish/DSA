#include<iostream>
#include<string.h>
using namespace std;

int main() {
  string str1;
  string str2;
  cout << "Enter string One : "; getline(cin, str1);
  cout << "Enter string Two : "; getline(cin, str2);

  // cout << str1.find(str2) << endl;

  if(str1.compare(str2) == 0)
    cout << "Matching" << endl;
  else
    cout << "Not Matching" << endl;

  return 0;
}