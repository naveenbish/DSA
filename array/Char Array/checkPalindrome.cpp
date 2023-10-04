#include<iostream>
#include<string.h>
using namespace std;


// Algorithm Used
// Reverse it and compare before array and after array; if it's true then it is palindrome.

bool checkPalindrome(char ch[], int size){
  int i=0,j=size-1;
  while(i<j){
    if(ch[i++] != ch[j--])
      return 0;
  }
  return 1;
}

int main() {

  char ch[100];
  cout << "Enter your value in char array : ";
  // cin >> ch;
  // cout << "Array length : " << strlen(ch);
  cin.getline(ch, 100);
  cout << "Array : " << ch << endl;
  if(checkPalindrome(ch,strlen(ch)))
    cout << "It is Palindrome String.";
  else
    cout << "It is not a Palindrome String.";

  return 0;
}