#include<iostream>
#include<vector>
using namespace std;

string binarySearch(vector<int> arr, int target){
  int s = 0,e=arr.size()-1,mid=((e-s)/2) + s; 

  while(s<=e){
    if(arr[mid] == target)
      return "present at index : " + to_string(mid);
    else if(arr[mid] > target)
      e = mid-1;
    else
      s = mid+1;
    
    mid = ((e-s)/2) + s;
  }
  return "not present";
}

int main() {
  vector<int> arr = {10,20,30,40,50,60,70,80};
  int target = 40;
  string result = binarySearch(arr,target);
  cout << result << endl;

  return 0;
}