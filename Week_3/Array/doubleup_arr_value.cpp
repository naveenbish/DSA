#include<iostream>
using namespace std;

int main() {

  int arr[] = {10,20,30,40,50};
  int size = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size;i++){
    arr[i] = arr[i]*2;
  }

  for(int i:arr)
    cout << i << " ";
  
  cout << endl;
  
  return 0;
}