#include<iostream>
#include<vector>
using namespace std;

string decodeMessage(string key, string message){
  char initial = 'a';
  char mapAlpha[280] = {0};
  for(int i = 0; i<key.size();i++){
    if(key[i] != ' ' && mapAlpha[key[i]] == 0){
      mapAlpha[key[i]] = initial;
      initial++;
      // cout << mapAlpha[key[i]] << endl;
    }
  }
  string ans;
  for(int i = 0;i<message.size();i++){
    if(message[i] == ' '){
      ans.push_back(' ');
    }
    ans.push_back(mapAlpha[message[i]]);
  }
  return ans;
}

int main(){
  // string key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv";
  string key = "eljuxhpwnyrdgtqkviszcfmabo", message = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";
  cout << decodeMessage(key,message) << endl;
  return 0;
}