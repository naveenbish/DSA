#include<iostream>
using namespace std;

void reverse_arr(int arr[],int size){
  
  int i = 0;
  int j = size-1;

  while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
  }

}

void printArr(int arr[], int size){
  for(int i = 0;i<size;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {

  int arr[] = {10,20,30,40,50,60};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  reverse_arr(arr,size);
  printArr(arr,size);
  return 0;
}