#include<iostream>
using namespace std;

int maxium(int a,int b,int c){
  if(a>b && a>c)
    return a;
  if(b>a && b>c)
    return b;
  return c;
}

int main() {

  cout << maxium(1000,200,30) << endl;

  return 0;
}