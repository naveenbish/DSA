#include<iostream>
using namespace std;

void rust() {
    // for(auto ch:key){
  //     if(ch != ' ' && mapping[ch] == 0){
  //         mapping[ch] = start;
  //         start++;
  //     }
  //     // cout << mapping[ch] << endl;
  // }
  //use mapping
  // string ans;
  // for(auto ch: message){
  //     if(ch == ' '){
  //         ans.push_back(' ');
  //     }else{
  //         char decodeChar = mapping[ch];
  //         ans.push_back(decodeChar);
  //     }
  // }
  // for(auto ch: ans){
  //   if(ch == '{'){
  //     break;
  //   }
  //   cout << ch;
  // }
}

string decoder() {

}

int main() {
  char key[1000] = "the quick brown fox jumps over the lazy dog";
  char message[1000] = "vkbs bs t suepuv";

  // Code stars from here....
  char start = 'a';
  char mapping[280] = {0};

  cout << decoder() << endl;

  return 0;
}