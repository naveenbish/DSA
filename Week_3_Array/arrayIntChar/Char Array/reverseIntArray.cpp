#include<iostream>
using namespace std;

// Algorithm Used
// -> i = 0; j = array length - 1;
// -> swap(arr[i++], arr[j--]) // break when i<j 

void printArr(int arr[], int size){
  for(int i=0;i<size;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverseArr(int arr[],int size){
  int i=0,j=size-1;
  while(i<j){
    swap(arr[i++],arr[j--]);
  }
  
  printArr(arr,8);
}

int main() {

  int arr[10] = {1,2,3,4,5,6,7,8};
  printArr(arr,8);
  reverseArr(arr, 8);

  return 0;
}