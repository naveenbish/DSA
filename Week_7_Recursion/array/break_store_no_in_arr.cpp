#include<iostream>
#include<vector>
using namespace std;

vector<int> breakStore(int num,vector<int> &ans){
  // Base case
  if(num == 0)
    return ans;

  // condition
  // Recurive call
  breakStore(num/10,ans);
  ans.push_back(num%10);
  return ans;
}

int main(){

  int number;
  cin >> number;
  vector<int> ans;
  breakStore(number, ans);
  for(auto i:ans){
    cout << i << " ";
  }

  return 0;
}