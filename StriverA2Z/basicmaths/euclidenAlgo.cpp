#include<bits/stdc++.h>
using namespace std;

void GCD(int a,int b){
  // break case
  if(a <= 0){
    cout << b << endl;
    return;
  }
  if(a<b){
    swap(a,b);
  }

  // login
  a = a%b;
  cout << "( " << a << ',' << b << " )" << endl;
  GCD(a,b);
}

int main(){
  int num1 = 52;
  int num2 = 10;
  GCD(num1,num2);
  return 0;
}
