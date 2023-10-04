#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
  int s=0,e=nums.size()-1, mid=(e-s)/2+s;
  int firstIndex = -1;
  while(s<=e){
        if((nums[mid] == nums[mid+1]) && mid+1 < nums.size()){
          firstIndex = mid;
          if(firstIndex%2 == 0 || firstIndex == 0)
            s = firstIndex + 2;
          if(firstIndex%2 != 0)
            e = firstIndex - 1;
        }else if((nums[mid] == nums[mid-1]) && mid-1 >= 0){
          firstIndex = mid-1;
          if(firstIndex%2 == 0 || firstIndex == 0)
            s = firstIndex + 2;
          if(firstIndex%2 != 0)
            e = firstIndex - 1;
        }
        else{
          return nums[mid];
        }
      mid = (e-s)/2 + s;
    }
  
  return -1;
}

int main() {
  // vector<int> arr = {3,3,7,7,10,11,11};
  // vector<int> arr = {1};
  vector<int> arr = {1,2,2,3,3};
  // vector<int> arr = {1,1,2,3,3,4,4,8,8};
  cout << singleNonDuplicate(arr) << endl;

  return 0;
}