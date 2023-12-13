#include <iostream>
#include <limits.h>

using namespace std;


int maxno(int a,int b,int c){
  if(a < b && a < c){
    return a;
  }
  else if(b < a && b < c){
    return b;
  }
  else{
    return c;
  }
}


int main() {
  
  cout << "Question : Find max of 3 numbers."
  int a, b, c;
  cin >> a >> b >> c;
  maxno(a,b,c);

  return 0;
}
