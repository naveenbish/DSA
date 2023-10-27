#include<iostream>
using namespace std;

string Prime(int n){
  int i = 2;
  while(i<=n/2){
    
    if(n%i==0)
      return "not prime";

    i++;
  }
  return "prime";
}

int main() {
  int n;
  cin >> n;
  cout << Prime(n) << endl;

  return 0;
}