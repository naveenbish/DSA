#include<iostream>
using namespace std;

bool printArray(int arr[], int size, int target, int i){
  
  // base case
  if(i >= size)
    return false;
  
  // Condition
  if(arr[i] == target)
    return true;

  // Recursive call
  bool ans = printArray(arr, size, target, i+1);
  return ans;
}

int main() {
  int arr[5] = {1,2,3,4,5};
  // cout << printArray(arr, 5, 2, 0) << endl;
  string ans = printArray(arr, 5, 5, 0)?"present":"not present";
  cout << ans << endl;
  return 0;
}