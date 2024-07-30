#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> arr;
        for(int i=0; i<trust.size();i++){
        }
        return 0;
        int sum1 = 0;
        for(int i:arr){
          cout << "i : " << i << endl;
            sum1 = sum1 + i;
        }
        int sum2 = 0;
        for(int i=1; i<=n; i++){
            sum2 = sum2 + i;
        }
        if(sum1 == sum2){
            cout << -1 <<endl;
            return -1;
        }
        cout << "reached here : " << sum2 - sum1 << endl;
        return sum2 - sum1;
    }
};

int main(){

  int n;
  vector<vector<int>> trust;
  trust.push_back({1,2});

  cout << "size: " << trust.size() << endl;
  Solution sol;
  sol.findJudge(2, trust);


  return 0;
}
