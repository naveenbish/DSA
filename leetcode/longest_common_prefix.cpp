#include <iostream>
#include <vector>
#include <string>
using namespace std;

int result(string arr1, string arr2, int &length, vector<string> &str, int &ans)
{
  int i = 0;
  int j = 0;
  int result = 0;
  if (arr1[0] != arr2[0])
  {
    length = str.size();
    return 0;
  }
  while (i < arr1.size() && j < arr2.size() && i < ans && j < ans)
  {
    if (arr1[i] == arr2[j])
      result++;
    else
      break;
    i++;
    j++;
  }
  return result;
}

// int longestPrefix(vector<string>& str,int length, int& ans){

//   // Base case
//   if(length >= str.size()-1){
//     // cout << "base case ans : " << ans << endl;
//     return ans;
//   }

//   // Recursive call
//   // Finding Result for the Question (Part of process)
//   string arr1 = str[length];
//   string arr2 = str[length+1];
//   ans = result(arr1, arr2);

//   longestPrefix(str, length+1, ans);
//   // cout << "ans : " << ans << endl;
//   return ans;
// }

string longestPrefix(vector<string> &str, int length, int &ans, string &res)
{

  // Base case
  if (length >= str.size() - 1)
  {
    return res;
  }

  // Recursive call
  // Finding Result for the Question (Part of process)
  string arr1 = str[length];
  string arr2 = str[length + 1];
  ans = result(arr1, arr2, length, str, ans);
  res = str[0].substr(0, ans);

  longestPrefix(str, length + 1, ans, res);
  if (ans == 0)
  {
    res = "-1";
  }
  return res;
}

int main()
{

  // vector<string> str = {"geeksforgeeks","geeks","geek","geezer"};
  // vector<string> str = {"hello", "world"};
  // vector<string> str = {"hello"};
  vector<string> str = {"hello","hello","h","hello","hello"};
  // int len = str.size() - 1 ;
  int len = 0;
  // longestPrefix(str , len, -1);
  int ans = str[0].size();
  string res = "-1";
  if (str.size() == 1)
    cout << str[0] << endl;
  else
    cout << longestPrefix(str, len, ans, res) << endl;
  // For printing string arr.
  // for(auto ch:str)
  //   cout << ch << " ";
  // cout << endl;
  // cout << "str[0].size()" << str[0].size() << endl;

  return 0;
}