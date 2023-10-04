#include<iostream>
using namespace std;

void FancyPattern_2(int num){
  int breaker=2;
  for(int i=1;i<=num;i++){
    if(i==1)
      cout << i << endl;
    for(int j=i;j<=breaker;j++){
      cout << j+1 << " ";
      i++;
      j++;
    }
    breaker++;
    cout << endl;
  }
}


int main() {
  int num;
  cout << "Enter a Number : ";
  cin >> num;
  FancyPattern_2(num);
  
  return 0;
}