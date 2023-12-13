#include<iostream>
using namespace std;

void numericHollowPyramid(int num){
  for(int i=1;i<=num;i++){
    for(int j=1;j<=i;j++){
      if(i==num)
        cout << j << " ";
      else if(j > 1 && j < i)
        cout << "  ";
      else
        cout << j << " ";
    }
    cout << endl;
  }
}

int main() {
  int num;
  cout << "Enter a Number : ";
  cin >> num;
  numericHollowPyramid(num);
  
  return 0;
}