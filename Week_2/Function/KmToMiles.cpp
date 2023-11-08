#include<iostream>
using namespace std;

float toMiles(int n){
  return float(n)*0.6213712;
}

int main(){

  int n;
  cin >> n;
  cout << toMiles(n) << endl;

  return 0;
}