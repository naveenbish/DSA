#include<iostream>
using namespace std;

void swap(int a, int b){
  a = a + b;
  b = a - b;
  a = a - b;
  cout <<"a : " << a << endl;
  cout <<"b : " << b << endl;
}

int main() {
  int a = 231;
  int b = 412;
  cout <<"a : " << a << endl;
  cout <<"b : " << b << endl;
  swap(a,b);
  return 0;
}