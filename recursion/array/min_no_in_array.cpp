#include<iostream>
using namespace std;

int minNo(int arr[], int size,int i, int ans){
  
  // base case
  if(i >= size)
    return ans;
  
  // Condition
  if(arr[i] < ans)
    ans = arr[i];

  // Recursive call
  ans = minNo(arr, size,i+1,ans);
  return ans;
}

int main() {
  int arr[5] = {1,2,-3,4,-5};
  // cout << minNo(arr, 5, 2, 0) << endl;
  int min = INT_MAX;
  int ans = minNo(arr, 5, 0, min);
  cout << ans << endl;
  return 0;
}