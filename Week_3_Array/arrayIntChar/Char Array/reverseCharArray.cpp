#include<iostream>
#include<string.h>
using namespace std;


// Algorithm Used
// -> i = 0; j = array length - 1;
// -> swap(ch[i++], ch[j--]) // break when i<j 

void reverseArr(char ch[], int size){
  int i=0,j=size-1;
  while(i<j){
    swap(ch[i++],ch[j--]);
  }
}

int main() {

  char ch[100];
  cout << "Enter your value in char array : ";
  // cin >> ch;
  // cout << "Array length : " << strlen(ch);
  cin.getline(ch, 100);
  cout << "Before : " << ch << endl;
  reverseArr(ch, strlen(ch));
  cout << "After : " << ch << endl;

  return 0;
}