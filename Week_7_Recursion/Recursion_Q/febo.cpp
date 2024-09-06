
#include<bits/stdc++.h>
using namespace std;

void factorial(long long n, long long i, vector<long long>& ans){
        int fact = 1;
        for(int j=1;j<=i;j++){
            fact = fact*j;
        }
        //Base case
        if(fact > n){
            return;
        }
        ans.push_back(fact);
        factorial(n,i+1,ans);
    }

int main() {

  int n = 3;
  vector<long long> ans;
  factorial(n,1,ans);
  for(auto i:ans){
    cout << i << endl;
  }

  return 0;
}
