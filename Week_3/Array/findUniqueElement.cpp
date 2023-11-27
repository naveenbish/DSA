#include<iostream>
using namespace std;

int uniqueEle(int arr[], int size){
  int temp = arr[0];
  for(int i = 1; i < size;i++){
    temp = (temp^arr[i]);
  }
  return temp;
}

int main(){

  int arr[] = {2,10,11,13,10,2,15,13,15};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout << uniqueEle(arr,size) << endl;
  return 0;
}