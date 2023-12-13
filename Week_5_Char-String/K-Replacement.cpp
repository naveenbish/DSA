#include <bits/stdc++.h> 
using namespace std;

// Coding Ninja Question

bool prime(int num){
    int i = 2;
    if(num==1 || num==0)
      return 0;
    while(i<=num/2){
        if(num%i == 0)
            return 0;
        i++;
    }
    return 1;
}

string kReplacement(int n, char k, string str) {
    int i=0,num=0;
    while(i<n){
        char value = str[i];
        num = (int)value - 48;
        if((num < 10 && num >= 0) && prime(num)) {
          str[i] = k;
        }
        i++;
    }
    return str;
}

int main() {
  string str = "0123456789";
  cout << kReplacement(10, '(', str) << endl;
  cout << prime(9) << endl;
}