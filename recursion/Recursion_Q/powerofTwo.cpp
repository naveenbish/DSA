#include<iostream>
#include<math.h>
using namespace std;

int PowerOfTwo(int n){
  // base case
  if(n == 0)
    return 1;
  //recursive relation or call
  int ans = 2*PowerOfTwo(n-1);
  return ans;
}

int main() {

  int n = 10;
  cout << PowerOfTwo(n) << endl;

  return 0;
}