#include<iostream>
using namespace std;

int minni(int arr[], int size){
  int ans = INT_MAX;

  for(int i=0;i<size;i++){
    if(arr[i] < ans)
      ans = arr[i];
  }

  return ans;
}
int maxxi(int arr[], int size){
  int ans = INT_MIN;

  for(int i=0;i<size;i++){
    if(arr[i] > ans)
      ans = arr[i];
  }

  return ans;
}

int main(){

  int arr[] = {6,5,4,-3,21,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout << "minimum value in arr : " << minni(arr, size) << endl;
  cout << "maximum value in arr : " << maxxi(arr, size) << endl;
  return 0;
}