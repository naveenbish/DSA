#include<iostream>
using namespace std;

// Here b and c are reference variable because both are holding the same memory address, which is associated to variable 'a'.

int main() {

  int a = 10;
  // b is reference variable referring to a;
  int& b= a;
  // c is reference variable referring to a;
  int& c= a;
  a = 10 + 10;
  cout << "a : " << a << " b : " << b << " c : " << c;
  cout << endl;

  return 0;
}