#include<iostream>
using namespace std;

// Array given as 10,20,30,40,50,60
// Print it as 10,60,20,50,30,40


void Ext_printArr(int arr[], int size){
  int i = 0;
  int j = size-1;

  while(i<=j){
    if(i<j){
      cout << arr[i] << " " << arr[j] << " ";
    }else{
      cout << arr[i] << " ";
    }
    i++;
    j--;
  }
  
  cout << endl;
}

int main() {

  int arr[] = {10,20,30,40,50,60};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  Ext_printArr(arr,size);
  return 0;
}