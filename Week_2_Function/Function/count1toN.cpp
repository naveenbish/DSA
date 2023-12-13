#include<iostream>
using namespace std;

void count(int n){
  int i = 1;
  while(i<=n){
    cout << i << " ";
    i++;
  }
}

int main() {
  int n;
  cin >> n;
  count(n);

  return 0;
}