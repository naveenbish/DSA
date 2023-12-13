#include<iostream>
#include<typeinfo>
using namespace std;

// Defination : Automatic Type Casting by compiler

int main(){
  // Example 1
  int num1 = 10;
  float num2 = 10.5;
  cout << num1 + num2 << endl; // returns float in output while adding int and float.


  // Example 2
  float num3 = 10.43;
  double num4 = 10.21523;
  cout << typeid(num3 + num4).name() << endl; // returns double in output when adding float and double together.
  
  //Example 3
  char ch = 'A';
  int a = 100;
  cout << typeid(ch + a).name() << endl; // returns 165 which is an int value, ch is stored in memory as 65. The ASCII value of character A.

  //Example 4
  int ac = 97;
  char b = ac;
  cout << b << endl; // We assigned int value to a char and it return the char value at ASCII vlaue of int value.

  return 0;
}