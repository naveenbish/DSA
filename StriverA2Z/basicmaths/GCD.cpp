#include<bits/stdc++.h>
using namespace std;

  // FIND factor
vector<int> factor(int n){
  vector<int> fact;
  for(int i=1;i<=n/2;i++){
    if(n%i == 0)
      fact.push_back(i);
  }
  fact.push_back(n);
  return fact;
}

// print factor
void printFact(vector<int> fact){
  for(auto i: fact){
    cout << i << " ";
  }
  cout << endl;
}

// get GCD
int GCD(vector<int> f1, vector<int> f2){
  int gcd = 1;
  for(int i=0;i<f1.size();i++){
    for(int j=0;j<f2.size();j++){
      if(f1[i] == f2[j]){
        gcd = f1[i];
      }
    }
  }
  return gcd;
}

int main() {
  int num1 = 9;
  int num2 = 13;
  
  printFact(factor(num1));
  printFact(factor(num2));

  cout << "GCD : " << GCD(factor(num1),factor(num2)) << endl;
  

  return 0;
}
