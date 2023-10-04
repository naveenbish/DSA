#include<iostream>
#include<vector>
using namespace std;

// Find this thing in O(logn) uisng binary Search

int findPivotEle(vector<int> arr){
  int s=0,e=size(arr)-1,mid=(e-s)/2 + s;
  
  if(size(arr) == 1)
    return 0;

  while(s<=e){
    if(arr[mid-1] > arr[mid] && mid-1 >= 0)
      return mid-1;
    if(arr[mid]> arr[mid+1] && mid+1 < size(arr))
      return mid;
    else if(arr[s] < arr[mid])
      s = mid;  
    else if(arr[mid] < arr[e])
      e = mid;

    mid = (e-s)/2 + s;
  }
  return -1;
}

int search(vector<int>& nums, int target) {
    int pivot = findPivotEle(nums);
    int e,s;
    if(nums[pivot] > target){
        s = pivot;
        e = size(nums) - 1;
    }else{
        e = pivot;
        s = 0;
    }
    int mid=(e-s)/2 + s;
    while(s<e){
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] > target)
            e = mid-1;
        else if(nums[mid] < target)
            s = mid + 1;
        mid=(e-s)/2 + s;
    }
    return -1;
}

using namespace std;
int main() {
  vector<int> arr = {4,5,6,7,0,1,2};
  cout << findPivotEle(arr) << " " << search(arr, 0) << endl;

  return 0;
}