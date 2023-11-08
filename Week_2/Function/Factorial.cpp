#include<iostream>
using namespace std;

int factorial(int n, int fact){
  
  // base case 
  if(n<=0)
    return fact;
  
  // Recursive call
  fact = n*factorial(n-1,fact);
  return fact;
}


int main(){

  int n;
  int fact=1;
  cin >> n;
  cout << factorial(n,fact) << endl;

  return 0;
}