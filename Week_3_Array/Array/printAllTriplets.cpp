#include<iostream>
using namespace std;

void printAllTripilets(int arr[], int size){
  int count = 0;
  for(int i = 0 ;i < size; i++){
    for(int j = 0;j<size;j++){
      for(int k = 0; k < size;k++){
        cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << " ";
        count++;
      }
      cout << endl;
    }
    cout << endl;
  }
  cout << "Count : " << count << endl;
}

int main(){

  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  printAllTripilets(arr,size);
  return 0;
}