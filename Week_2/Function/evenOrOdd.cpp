#include<iostream>
using namespace std;

string EvenOdd(int n){
  int i = 2;
  if(n%2 == 0)
    return "Even";
  return "Odd";
}

int main() {
  int n;
  cin >> n;
  cout << EvenOdd(n) << endl;

  return 0;
}