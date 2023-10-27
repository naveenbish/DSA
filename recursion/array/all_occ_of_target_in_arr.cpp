#include<iostream>
using namespace std;

int totalOcc(int arr[], int size, int target, int i, int count){
  
  // base case
  if(i >= size)
    return count;
  
  // Condition
  if(arr[i] == target)
    count++;

  // Recursive call
  int ans = totalOcc(arr, size, target, i+1 ,count);
  return ans;
}

int main() {
  int arr[] = {1,2,3,3,3,5,3,3,3,2,2,2};
  int size = sizeof(arr)/sizeof(arr[0]);
  int count = 0;
  int ans = totalOcc(arr, size, 2, 0 ,count);
  cout << ans << endl;
  return 0;
}