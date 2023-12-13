// Leetcode 2430
#include<iostream>
using namespace std;

bool validPalindrome(string s) {
    string temp(1,s[0]);
    int i = 0;
    int j = s.size() - 1;
    int counti=0;
    int countj=0;
    while(i<j){
      if(s[i] == s[j]){
        i++;
        j--;
      }else{
        if(s[i+1] == s[j] && counti == 0){
          cout << "Entered here in i : " << i << " j :" << j << endl;
          if(i<j && s[i+2] == s[j-1]){
            i++;
            cout << "i incremeneted : " << i << endl;
          }
          counti++;
        }
        if(s[j-1] == s[i] && countj == 0){
          cout << "Entered here in j : " << j << " i :" << i << endl;
          if(i<j && s[j-2] == s[i+1]){
            j--;
            cout << "j decremented : " << j << endl;
          }
          countj++;
        }
      }
    }
    
}

int main() {
  // string s = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";
  string s = "eedede";
  // string s = "tcaac";
  if(validPalindrome(s))
    cout << "Palindrome" << endl;
  else
    cout << "Not a Palindrome" << endl;

  return 0;
}