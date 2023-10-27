#include<iostream>
using namespace std;

void printArray(int arr[], int size,int i){
  // Base Case
  if(i >= size){
    return;
  }
  // recursive call;
  cout << arr[i] << " ";
  printArray(arr,5,i+1);
}

int main() {
  int arr[5] = {1,2,3,4,5};
  printArray(arr, 5, 0);
  return 0;
}