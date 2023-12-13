#include <iostream>
#include <climits>
using namespace std;

// long long int fabonacci(int n){
//   // Base Case
//   if(n == 0)
//     return 0;
//   if(n == 1)
//     return 1;

//   // Recursive Call
//   long long int ans = fabonacci(n - 1) + fabonacci(n - 2);
//   return ans;

// }

// int sum(int n){

//   // base case
//   if(n == 0)
//     return 0;
    
//   // Recursion Call
//   int ans = n + sum(n - 1);
  
//   return ans;
// }

// void decreasing(int n){
//   // base case
//   if(n == 0)
//     return;
  
//   // Recursion call
//   cout << n << " ";
//   decreasing(n-1);
// }

// void Increment(int n){
//   // base case
//   if(n == 0)
//     return;
  
//   // Recursion call
//   Increment(n - 1);
//   cout << n << " ";
// }

int fact(int n){
  // base case
  if(n == 1)
    return 1;
  
  // Recursion call
  int ans = n * fact(n - 1);
  return ans;
}

int main() {
  int n;
  cin >> n;
  // cout << "Fabonacci of "<< n <<  " is " << fabonacci(n) << endl;
  // cout << "Sum from n to 1 : " << sum(n) << endl;
  // sum(n);

  // cout << "Print in Decreasing : ";
  // decreasing(n);
  // cout << "Print in Increment : ";
  // Increment(n);
  cout << fact(n) << endl;
  return 0;
}