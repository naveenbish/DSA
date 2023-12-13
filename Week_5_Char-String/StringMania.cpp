#include <bits/stdc++.h> 
using namespace std;

// Coding Ninja Question

int stringMania(int n, int m, string str1, string str2) {
  if(str1 == str2)
    return 0;
  int i = 0;
  int size = n>m ? n:m;
  while (i<size)
  {
    if((int)str1[i] - (int)str2[i] > 0)
      return 1;
    if((int)str1[i] - (int)str2[i] < 0)
      return -1;

    i++;
  }
  return 0; 
}

int main() {
  string str1="xyz";  
  string str2="abcd";
  cout << stringMania(3,4,str1,str2) << endl;  
}