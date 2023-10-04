#include<iostream>
using namespace std;

string removeDuplicates(string s) {
    string temp(1,s[0]);
    int i = 1,j=0;
    while(i<s.size()){
        if(temp[j] == s[i] && j >=0){
            temp.pop_back();
            j--;
        }
        else{
            temp.push_back(s[i]);
            j++;
        }
        i++;
    }
    return temp;
}

int main() {
  // string s = "abbaca";
  string s = "azxxzy ";
  // string s = "aa";
  cout << removeDuplicates(s) << endl;

  return 0;
}