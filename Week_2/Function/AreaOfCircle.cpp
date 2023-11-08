#include<iostream>
#include<math.h>
using namespace std;

float AreaOfCircle(int n){
  // float area = M_PI*float(n)*n;
  float area = M_PI*n*n;
  return area;
}

int main() {
  int n;
  cin >> n;
  cout << AreaOfCircle(n) << endl;
  return 0;
}