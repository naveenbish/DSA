#include<bits/stdc++.h>
using namespace std;

void reverseArr(vector<int>& arr, int s, int e){
  // base case
  if(s > e){
    return;
  }
    swap(arr[s], arr[e]);
    reverseArr(arr, s+1,e-1);
}

int main() {
  /*vector<int> arr = {1,2,3,4,5};*/
  vector<int> arr = {1,2,3,4,5,6};
  reverseArr(arr, 0, arr.size()-1);
  for(auto i:arr){
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
