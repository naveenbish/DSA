#include<iostream>
#include<vector>
using namespace std;

vector<int> doulbeNO(vector<int> &arr, int size,int i){
  
  // base case
  if(i >= size)
    return arr;

  // Condition
  arr[i] = arr[i]*2;

  // Recursive call
  arr = doulbeNO(arr, size,i+1);
  return arr;
}

int main() {
  vector<int> arr = {10,20,30,40,50};
  // cout << doulbeNO(arr, 5, 2, 0) << endl;
  int max = INT_MIN;
  doulbeNO(arr, 5, 0);
  for(auto i : arr)
    cout << i << " ";
  cout << endl;
  return 0;
}