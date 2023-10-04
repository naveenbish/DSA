#include<iostream>
using namespace std;

int solve(string s,int K){
  int i = 0,count = 0,last=-1;
  int n = s.size();
  while(i<n){
    if(s[i] == '0'){
      if(i-last <= K && last != -1){
        count++;
        s[i] = '2';
      }
    }else if(s[i] == '1'){
      last = i;
      count++;
    }
    i++;
  }
  int j=n-1;
  last = -1;
  while(j>=0){
    if(s[j] == '0'){
      if(last-j <= K && last != -1){
        count++;
      }
      s[j] == '2';
    }else if(s[j] == '1'){
      last = j;
    }
    j--;
  }
  return count;
}

int main() {
  string str = "0010100";
  int k = 1;
  cout << solve(str, k) << endl;
}