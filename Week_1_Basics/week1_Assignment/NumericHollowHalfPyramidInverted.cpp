#include<iostream>
using namespace std;

void numericHollowPyramidInvert(int num){
  for(int i=1;i<=num;i++){
    for(int j=i;j<=num;j++){
      if(i==1)
        cout << j << " ";
      else if(j > i && j < num)
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
  numericHollowPyramidInvert(num);
  
  return 0;
}