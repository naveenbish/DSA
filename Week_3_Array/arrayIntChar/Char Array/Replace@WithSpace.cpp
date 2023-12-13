#include<iostream>
#include<string.h>
using namespace std;


// Algorithm Used
// Traverse whole arr and then replace '@' with " ";

void replaceWithSpace(char ch[]){
 int i=0;
  while(ch[i] != '\0'){
    if(ch[i] == '@')
      ch[i] = ' ';
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
  replaceWithSpace(ch);
  cout << "AFTER : " << ch << endl;

  return 0;
}