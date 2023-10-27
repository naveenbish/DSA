#include<iostream>
#include<vector>
using namespace std;

vector<int> findEven(int arr[], int size,vector<int>& input,int i){
  
  // Base case
  if(i >= size){
    return input;
  }

  // Condition
  if(arr[i]%2 == 0){
    input.push_back(arr[i]);
  }

  // Recursive Call
  input = findEven(arr, size, input,i+1);
  return input;
}

int main() {
  int arr[] = {11,20,31,40,51};
  // int arr[] = {1,2,3,4,5,6,7,8,9,10};
  // char arr[] = {'a','b'};
  // cout << minNo(arr, 5, 2, 0) << endl;
  int min = INT_MAX;
  int size = sizeof(arr)/sizeof(arr[0]);
  vector<int> input;
  vector<int> ans = findEven(arr, size, input,0);
  for(auto i : input)
    cout << i << " ";
  cout << endl;
  return 0;
}