#include<iostream>
using namespace std;

// Using Counting method
// void sortZeroOne(int arr[], int size){
//   int count = 0;
//   for(int i = 0;i<size;i++){
//     if(arr[i] == 0)
//       count++;
//   }
//   for(int i=0;i<count;i++){
//     arr[i] = 0;
//   }
//   for(int i=count;i<size;i++){
//     arr[i] = 1;
//   }
// }

// Using Two Pointer Approach
void sortZeroOne(int arr[],int size){
  int i=0,j=size-1;
  while(i<j){
    if(arr[i] == 0)
      i++;

    if(arr[j] == 1)
      j--;
    
    if(arr[i] != 0 && arr[j] != 1){
      swap(arr[i],arr[j]);
      i++;j--;
    }
  }
}

int main(){

  int arr[] = {1,0,1,0,0,1,1,0,0,0,1,0,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  sortZeroOne(arr,size);
  for(int i =0;i<size;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}