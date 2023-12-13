#include<iostream>
#include<vector>
using namespace std;

string lastOccurance(vector<int> arr, int target){
  int s = 0,e=arr.size()-1,mid=((e-s)/2) + s; 
  string result = "not present";
  while(s<=e){
    if(arr[mid] == target){
      result = "present at " + to_string(mid);
      s = mid + 1;
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
  vector<int> arr = {10,20,30,30,30,30,30,30,30};
  int target = 30;
  string result = lastOccurance(arr,target);
  cout << result << endl;

  return 0;
}