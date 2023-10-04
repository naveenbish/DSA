#include<iostream>
#include<vector>
using namespace std;

int firstOccurance(vector<int> arr, int target){
  int s = 0,e=arr.size()-1,mid=((e-s)/2) + s; 
  int result = mid;
  while(s<=e){
    if(arr[mid] == target){
      result = mid;
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

int lastOccurance(vector<int> arr, int target){
  int s = 0,e=arr.size()-1,mid=((e-s)/2) + s; 
  int result = mid;
  while(s<=e){
    if(arr[mid] == target){
      result = mid;
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
  vector<int> arr = {10,20,30,30,30,30,40,60,70,80};
  int target = 30;
  int result = lastOccurance(arr,target) - firstOccurance(arr,target) + 1;
  cout << result << endl;

  return 0;
}