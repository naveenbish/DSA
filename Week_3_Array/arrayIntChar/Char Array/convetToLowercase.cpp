#include<iostream>
#include<string.h>
using namespace std;


// Algorithm Used
// -> Upper case - 'A' + 'a'  // work is getting done in binary.
// Eg. C - 'A' +'a' => result : 'c'

void lowerCaseConv(char ch[]){
 int i=0;
  while(ch[i] != '\0'){
    if(ch[i] >= 'A' && ch[i] <= 'Z')
      ch[i] = ch[i] - 'A' + 'a';
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
  lowerCaseConv(ch);
  cout << "AFTER : " << ch << endl;

  return 0;
}