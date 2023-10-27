Unable to make it
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
//   vector<string> result;
//   vector<int> indexes;
//   int i = 0;
//   while(i < n-1){
//     if(groups[i] != groups[i+1]){
//       indexes.push_back(i);
//       indexes.push_back(i+1);
//     }
//     i++;
//   }
//   for(auto ch:indexes)
//     cout << ch << endl;

//   return result;
// }

// int main() {
//   vector<string> words = {"e","a","b"};
//   vector<int> groups = {0,0,1};
//   int n = words.size();
//   getWordsInLongestSubsequence(n, words, groups);
//   return 0;
// }