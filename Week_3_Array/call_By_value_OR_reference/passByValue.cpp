#include<iostream>
using namespace std;

// Here the value of n is not affected by function because n is passed in the function via a value, that means it is basically a copy of n and stored at diff. memory location, any types of operation performed will not affect the real n.


int incrementBy(int n){
  n++;
  return n;
}

int main() {

  int n = 10;
  incrementBy(n);
  cout << n << endl;
  return 0;
}