#include<iostream>
using namespace std;

int main() {
  int num = 7789;
  for(int i=7789; i > 0; i= i/10){
    cout << (i % 10) << endl;
  }
  return 0;
}
