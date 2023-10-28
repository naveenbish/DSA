#include<iostream>
using namespace std;

string evenOdd(int n){
  return n&1?"Odd":"Even";
}


int main(){
  int n;
  cin >> n;
  cout << evenOdd(n) << endl;
  return 0;
}