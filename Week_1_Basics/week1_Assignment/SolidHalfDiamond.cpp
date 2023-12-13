#include<iostream>
using namespace std;

void SolidHalfDaimond(int num){
  for(int i=1;i<=num;i++){
    for(int j=0;j<i;j++){
      cout << "*";
    }
    cout << endl;
  }
  for(int i=1;i<num;i++){
    for(int j=num;j>i;j--){
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  int num;
  cout << "Enter a Number : ";
  cin >> num;
  SolidHalfDaimond(num);
  
  return 0;
}