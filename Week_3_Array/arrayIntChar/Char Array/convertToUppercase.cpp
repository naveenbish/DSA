#include<iostream>
#include<string.h>
using namespace std;


// Algorithm Used
// -> Lower char - 'a' + 'A'  // work is getting done in binary.
// Eg. c - 'a' + 'A' => result : 'C'

void upperCaseConv(char ch[]){
  int i=0;
  while(ch[i] != '\0'){
    if(ch[i] >= 'a' && ch[i] <= 'z')
      ch[i] = ch[i] - 'a' + 'A';
    i++;
  }
}

int main() {

  char ch[100];
  cout << "Enter your value in char array : ";
  // cin >> ch;
  // cout << "Array length : " << strlen(ch);
  cin.getline(ch, 100);
  cout << "Before : " << ch << endl;
  upperCaseConv(ch);
  cout << "AFTER : " << ch << endl;

  return 0;
}