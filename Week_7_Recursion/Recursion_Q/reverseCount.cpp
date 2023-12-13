#include<iostream>
using namespace std;

void printnum(int n){
  // base case
  if(n == 0){
    cout << " end reached " << " ";
    return;
  }

  // Process
  cout << n << " ";
  
  //recursive relation or call
  printnum(n -1);
  cout << n << " ";
}

int main() {

  int n = 5;
  printnum(n);

  return 0;
}