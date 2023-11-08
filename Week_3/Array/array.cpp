#include<iostream>
using namespace std;

int main() {

  // char crr[10] = {'1','2'};
  // int crr[] = {1,2,3,4,5,6};
  
  // Print array 

  // for(auto ch : crr){
  //   cout << ch << endl;
  // }

  // Size in array
  // cout << sizeof(crr) << endl;
  // cout << (sizeof(crr)/sizeof(crr[0])) << endl;
  
  // Take input and then print it in an array.
  int arr[5];
  int size = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size;i++){
    cin >> arr[i];
  }
  for(int i:arr){
    cout << i << " ";
  }cout << endl;
  
  return 0;
}