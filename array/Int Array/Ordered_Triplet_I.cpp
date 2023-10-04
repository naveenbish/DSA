#include<iostream>
#include<vector>
using namespace std;

long long maximumTripletValue(vector<int>& nums) {
  int i = 0;
  long long int result = 0;
  while(i<nums.size()-2){
    int j = i+1;
    while(j<nums.size()-1){
      int k = j+1;
      while(k<nums.size()){
        long long a = nums[i];
        long long b = nums[j];
        long long c = nums[k];
        long long int opt = (a - b) * c;
        cout << "{" << a << "," << b << "," << c << "}" << opt << endl;
        if(opt > result)
          result = opt;
        k++;
      }     
      j++;
    }
    i++;
  }
  if(result<0)
    return 0;
  return result;
  
}


int main() {
  // vector<int> nums = {12,6,1,2,7};
  // vector<int> nums = {1,10,3,4,19};
  vector<int> nums = {1000000,1,1000000};
  cout << maximumTripletValue(nums) << endl;

  return 0;
}