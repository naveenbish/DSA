#include<iostream>
using namespace std;

void FancyPattern(int num){
  int sum = 1;
  for(int i=1;i<=num;i++){
    for(int j=i;j<=num;j++){
      cout << "*";
    }
    if(i==1){
      cout << 1;
    }
    else{
      sum = sum+2;
      for(int j=1;j<=sum;j++){
        if(j%2==0)
          cout << "*";
        else
          cout << i;
      }
    }
    for(int j=i;j<=num;j++){
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  int num;
  cout << "Enter a Number : ";
  cin >> num;
  FancyPattern(num);
  
  return 0;
}