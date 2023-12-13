// Leetcode 2430
// Incomplete Solution
#include<iostream>
using namespace std;

int removeDuplicates(string s) {
    string temp(1,s[0]);
    int i = 1,j=0,count=0;
    while(i<s.size()){
        if(temp[j] == s[i] && j >=0){
            temp.pop_back();
            count++;
            temp.push_back(s[i]);
            j--;
        }
        else{
            temp.push_back(s[i]);
            j++;
        }
        i++;
    }
    return count;
}

int main() {
  // string s = "azxxzy ";
  string s = "abcabcdabc";
  cout << removeDuplicates(s) << endl;

  return 0;
}