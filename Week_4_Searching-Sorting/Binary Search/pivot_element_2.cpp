#include<iostream>
#include<vector>

using namespace std;

int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
          int sum1=0;
          int sum2=0;
          int count1=0;
          int count2=0;
          for(int j=0;j<i;j++){
            sum1 = sum1 + nums[j];
            count1++;
          }
          for(int j=nums.size()-1;j>i;j--){
            sum2 = sum2 + nums[j];
            count2++;
          }
          if(i==0 && sum2==0 && count2>0)
            return i;
          if(i==0 && sum1==0 && count1>0)
            return i;
          
          if(sum1==sum2)
            return i;
        }
        return -1;
}

int main(){
  // vector<int> nums = {-1,-1,-1,-1,-1,0}; //ans = 2
  // vector<int> nums = {2,1,-1}; //ans = 0
  // vector<int> nums = {1,7,3,6,5,6}; //ans =3 
  // vector<int> nums = {-1,-1,-1,-1,0,1}; //ans = 1
  // vector<int> nums = {-1,-1,1,-1,-1,0}; //ans = 1
  // vector<int> nums = {-1,-1,0,1,-1,-1}; //ans = 1
  vector<int> nums = {-1,-1,1,0,0,-1}; //ans = 3
  cout << pivotIndex(nums) << endl;
}