#include<iostream>
using namespace std;

// Example : 10,20,30,40,50,60
// Output : 60,10,20,30,40,50


void shift_by_One(int arr[],int size){
  int temp = arr[size-1];
  for(int i=size-1;i>0;i--){
    arr[i] = arr[i-1];
  }
  arr[0] = temp;
}

int main(){

  int arr[] = {10,20,30,40,50,60};
  int size = sizeof(arr)/sizeof(arr[0]);
  shift_by_One(arr,size);
  for(int i =0;i<size;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}