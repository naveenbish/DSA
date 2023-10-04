// Leetcode : 1209 : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/
// 19 test cases passed out of 21.
#include<iostream>
#include<vector>
using namespace std;

string removeDuplicates(string s,int k) {
  string temp(1,s[0]);
  int i = 1;
  while(i<s.size()){
    int j = 1;
    bool light = false;
    while(j<k){
      if(temp.size()>=j && temp[temp.size()-j] == s[i]){
        if(j==k-1)
          light = true;
      }else{
        temp.push_back(s[i]);
        break;
      }
      j++;
    }
    int f = 1;
    while(temp.size()>0 && f<k){
      if(light){
        temp.pop_back();
        cout << "Poped temp: " << temp << endl;
      }
      f++;
    }
    light = false;
    i++;
  }
  return temp;
}

int main(){
  // string s = "deeedbbcccbdaa"; // Ans == aa
  // string s = "abcd";
  string s = "abcd";
  // string s = "pbbcggttciiippooaais";
  int k = 2;
  cout << removeDuplicates(s,k) << endl;
  return 0;
}
