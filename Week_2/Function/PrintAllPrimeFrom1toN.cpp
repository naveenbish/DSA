#include<iostream>
using namespace std;

void Prime(int n){
  int count = 0;
  for(int j = 1;j<=n;j++){
    int i = 2;
    while(i<=j/2){

      if(j%i==0){
        count++;
        break;
      }

      i++;
    }
    if(count == 0)
      cout << j << " is prime." << endl;
    count = 0;
  }
}

int main() {
  int n;
  cin >> n;
  Prime(n);

  return 0;
}