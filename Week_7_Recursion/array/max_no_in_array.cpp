#include<iostream>
using namespace std;

int maxNo(int arr[], int size,int i, int ans){
  
  // base case
  if(i >= size)
    return ans;
  
  // Condition
  if(arr[i] > ans)
    ans = arr[i];

  // Recursive call
  ans = maxNo(arr, size,i+1,ans);
  return ans;
}

int main() {
  int arr[5] = {10,2,386,4,5};
  // cout << maxNo(arr, 5, 2, 0) << endl;
  int max = INT_MIN;
  int ans = maxNo(arr, 5, 0, max);
  cout << ans << endl;
  return 0;
}