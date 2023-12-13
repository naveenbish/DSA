#include<iostream>
using namespace std;

int merge(int arr[],int s,int e){
  
}

void mergeSort(int arr[],int s, int e){
  // Base Case 
  if(s >= e)
    return ;

  // Break
  int mid = (e-s)/2;

  // Recursive Call
  
  // left
  mergeSort(arr, s,mid);
  
  // Right
  mergeSort(arr, mid+1, e);

  merge(arr,s,e);

}

int main() {

  int arr[] = {2,5,1,2,7,8,5,19,0,-23};
  int size = sizeof(arr)/sizeof(arr[0]);
  int s = 0;
  int e = size - 1;
  mergeSort(arr,s,e);

  return 0;
}