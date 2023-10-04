#include<iostream>
#include<vector>
using namespace std;

string firstOccurance(vector<int> arr, int target){
  int s = 0,e=arr.size()-1,mid=((e-s)/2) + s; 
  string result = "not present";
  while(s<=e){
    if(arr[mid] == target){
      result = "present at " + to_string(mid);
      e = mid - 1;
    }
    else if(arr[mid] > target)
      e = mid-1;
    else
      s = mid+1;
    
    mid = ((e-s)/2) + s;
  }
  return result;
}

int main() {
  vector<int> arr = {10,20,30,30,30,30,40,30,60,70,80};
  int target = 10;
  string result = firstOccurance(arr,target);
  cout << result << endl;

  return 0;
}