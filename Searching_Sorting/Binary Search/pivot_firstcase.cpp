#include<iostream>
#include<vector>

using namespace std;

void pivotIndex(vector<int> nums) {
        int s=0,e=nums.size()-1,mid=(e-s)/2 + s;
        int sum1=0,sum2=0;
            cout << "mid : " << mid << endl;

        int j=0;
        while(true){
            cout << "First if" << endl;
            cout << "mid : " << mid << endl;
            if(mid+j < nums.size()){
                for(int i=0;i<mid+j;i++){
                    sum1 = sum1+nums[i];
                    cout << "sum1 : " << sum1 << endl;
                }
                for(int i=nums.size()-1;i>mid+j;i--){
                    sum2 = sum2+nums[i];
                    cout << "sum2 : " << sum2 << endl;
                }
                if(sum2==sum1)
                  cout << mid << endl;
            }
            break;
            if(mid+j > nums.size() && mid-j < 0)
              break;
            
            j++;
        }
        cout << -1 << endl;
    }

int main(){
  // vector<int> nums = {-1,-1,-1,-1,-1,0};
  vector<int> nums = {1,7,3,6,5,6};
  pivotIndex(nums);
}