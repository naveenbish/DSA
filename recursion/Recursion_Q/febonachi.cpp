#include<iostream>
#include<math.h>
using namespace std;

int fabo(int n){
  // base case
  if(n == 0)
    return 0;
  if(n == 1)
    return 1;
  
  //recursive relation or call
  int ans = fabo(n-1) + fabo(n-2);
  
  return ans;
}

int main() {

  int n = 10;
  cout << fabo(n) << endl;

  return 0;
}