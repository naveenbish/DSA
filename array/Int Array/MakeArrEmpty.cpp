#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int emtArr(vector<int> nums){
  int count=0;
  int result=0;
  sort(nums.begin(),nums.end(), greater<int>());
  while(nums.size() > 0){
    int j = nums.size() - 1;
    for(int i=0;i<nums.size();i++){
      if(nums[i] == nums[j]){
        count++;
      }
    }
    if(count > 1){
      while(count != 0){
        if(count%3 == 0){
          for(int i=0;i<count;i++){
            nums.pop_back();
          }
          result = result + count/3;
          count = 0;
          break;
        }
        count = count - 2;
        nums.pop_back();
        nums.pop_back();
        result = result + 1;
      }
      result = result + count/2;
      count = 0;
    }else{
      return -1;
    }
  }
  return result;
}

int main() {
  
  // vector<int> nums = {2,3,3,2,2,4,2,3,4};
  vector<int> nums = {2,1,2,2,3,3};
  // vector<int> nums = {2,1,2,2,3,3};
  // vector<int> nums = {14,12,14,14,12,14,14,12,12,12,12,14,14,12,14,14,14,12,12};
  // vector<int> nums = {19,19,19,19,19,19,19,19,19,19,19,19,19};
  cout << emtArr(nums) << endl;
  return 0;
}