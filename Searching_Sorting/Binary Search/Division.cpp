#include<iostream>
using namespace std;

int division(int a, int b){
  int s = 0; int e = a;
  int mid = (e-s)/2 + s;
  int ans = 0;
  while(s<=e){
    int q_Di = mid * b;
    if(q_Di <= a){
      ans = mid;
      s = mid + 1;
    }else{
      e = mid - 1;
    }
  mid = (e-s)/2 + s;
  }
  return ans;
}

int main() {
  cout << "Enter two no." << endl;
  int a,b;
  cout << "a: ";
  cin >> a;
  cout << endl;
  cout << "b: ";
  cin >> b;
  cout <<"Ans : " << division(a,b) << endl;
}