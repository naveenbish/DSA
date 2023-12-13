#include<iostream>
using namespace std;

// Here the value of 'n' will be affected by function because 'n' is passed in the function via a reference, that means it is sending the actual address of 'n' , any types of operation performed will affect the real 'n'.


int incrementBy(int &n){
  n++;
  return n;
}

int main() {

  int n = 10;
  incrementBy(n);
  cout << n << endl;
  return 0;
}