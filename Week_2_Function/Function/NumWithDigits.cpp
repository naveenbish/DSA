#include<iostream>
using namespace std;

void CreateAnINT(int n){
  int a;
  int sum = 0;
  for(int i=0;i<n;i++){
    cin >> a;
    sum = sum*10 + a;
  }
  cout << sum << endl;
}

int main() {
  int n;
  cin >> n;
  CreateAnINT(n);

  return 0;
}