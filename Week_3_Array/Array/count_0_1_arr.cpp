#include<iostream>
using namespace std;

void countInArr(int arr[], int size){
  int zero = 0;
  int one = 0;
  for(int i=0;i<size;i++){
    if(arr[i]==0)
      zero++;
    else
      one++;
  }
  cout << "One : " << one << endl;
  cout << "Zero : " << zero << endl;
}

int main(){

  int arr[] = {1,0,0,0,1,1,1,1,0,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  countInArr(arr,size);
  return 0;
}