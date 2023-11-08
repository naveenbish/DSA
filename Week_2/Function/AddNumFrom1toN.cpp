#include<iostream>
using namespace std;

int SumOfN(int n){
  int i = 1;
  int sum = 0;
  while(i <= n){
    sum = sum + i;
    i++;
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  cout << SumOfN(n) << endl;

  return 0;
}