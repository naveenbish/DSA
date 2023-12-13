#include<iostream>
#include<vector>

using namespace std;

int pivotIndex(vector<int>& nums) {
        int s=0,e=nums.size()-1,mid=s+(e-s)/2;
        int sum1=0,sum2=0;
        int j=0;
        int result = -1;
        int negresult = -1;
        int poslow = -1,count=0;
        while(true){
            if(mid+j < nums.size() || mid-j >= 0){
                cout << "check 1 " << result << endl;
                for(int i=0;i<mid+j;i++){
                    sum1 = sum1+nums[i];
                }
                for(int i=nums.size()-1;i>mid+j;i--){
                    sum2 = sum2+nums[i];
                }
                if(sum2==sum1){
                  result = mid+j;
                  count++;
                  if(count==1)
                    poslow=result;
                }
            }
            if(mid-j >= 0){
                cout << "check 2 " << result << " " << mid-j << endl;
                    sum1=0;
                    sum2=0;
                    for(int i=0;i<mid-j;i++){
                        sum1 = sum1+nums[i];
                    }
                    for(int i=nums.size()-1;i>mid-j;i--){
                        sum2 = sum2+nums[i];
                    }
                    if(sum2==sum1)
                      negresult = mid-j;
                    else if(mid-j == 0){
                      cout << "check 3 " << result << endl;
                      sum2=0;
                      for(int i=nums.size()-1;i>mid-j;i--){
                        sum2 = sum2+nums[i];
                      }
                      if(sum2==0)
                        return mid-j;
                    }
                    else if(mid+j == 0){
                      cout << "check 4 " << result << endl;
                      sum1=0;
                    for(int i=0;i<mid+j;i++){
                      sum1 = sum1+nums[i];
                    }
                    if(sum1==0)
                        return mid+j;
                    }
            }
            cout << "loop over " << result << endl;
            if(mid+j > nums.size() && mid-j < 0)
              break;
            j++;
            sum1=0;
            sum2=0;
        }
        if(negresult >= 0)
          return negresult;
        if(poslow < result)
          return poslow;
        return result;
    }

int main(){
  vector<int> nums = {-1,-1,-1,-1,-1,0}; //ans = 2
  // vector<int> nums = {2,1,-1}; //ans = 0
  // vector<int> nums = {1,7,3,6,5,6}; //ans =3 
  // vector<int> nums = {-1,-1,-1,-1,0,1}; //ans = 1
  // vector<int> nums = {-1,-1,1,-1,-1,0}; //ans = 1
  // vector<int> nums = {-1,-1,0,1,-1,-1}; //ans = 1
  // vector<int> nums = {-1,-1,1,0,0,-1}; //ans = 3
  cout << pivotIndex(nums) << endl;
}