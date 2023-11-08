#include<iostream>
using namespace std;

float fToC(int n){
  return ((float(5)/9)*(n-32));
}

int main() {

  float n;
  cin >> n;
  cout << fToC(n) << endl;

  return 0;
}