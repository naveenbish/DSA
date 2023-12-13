#include<iostream>
using namespace std;

int DecToBin(int n, int& sum){
    // Base call
  if(n <= 0)
    return sum;  

  // process
  int ans = n%2;
  
  // Recursive Call
  DecToBin(n/2,sum);
  sum =(sum*10 + ans);
  return sum;
}

int main() {
  int n;
  cin >> n;
  int sum = 0;
  cout << DecToBin(n, sum);

  return 0;
}