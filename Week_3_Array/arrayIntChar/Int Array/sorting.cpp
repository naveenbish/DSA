#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
  vector<int> arr = {5,3,1,2,6,8};
  sort(arr.begin(),arr.end());
  for(auto ch:arr){
    cout << ch << " ";
  }
  cout << endl;
  return 0;
}