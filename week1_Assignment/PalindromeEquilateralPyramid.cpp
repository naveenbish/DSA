#include<iostream>
using namespace std;

void PalindromeEquilateralPyramid(int num){
  for(int i=1;i<=num;i++){
    for(int k=i;k<num;k++){
        cout << " ";
      }
    for(int j=1;j<=i;j++){
      cout << j;
    }
    for(int j=i-1;j>=1;j--){
      cout << j;
    }
    cout << endl;
  }
}

int main() {
  int num;
  cout << "Enter a Number : ";
  cin >> num;
  PalindromeEquilateralPyramid(num);
  
  return 0;
}