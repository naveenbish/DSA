#include<iostream>
using namespace std;

// We are solving this algo with divide and conqure, here we will be using recusion. D&C means recursion only.

void merge(int arr[], int s, int e){

  int mid = (s+e)/2;

  int lenLeft = mid - s + 1;
  int lenRight = e - mid;
  
  // create left and right array
  int *left = new int[lenLeft];
  int *right = new int[lenRight];

  // copy values from original array to left array
  int k = s;
  // k -> starting index of left array values in original array
  for(int i=0; i<lenLeft; i++){
    left[i] = arr[k];
    k++;
  }

  //copy values from original array to right array
  k = mid+1;
  for(int i = 0; i < lenRight; i++){
    right[i] = arr[k];
    k++;
  }

  //actual merge logic here
  //left array is already sorted
  //Right array is alredy sorted
  int leftIndex = 0;
  int rightIndex = 0;
  int mainArrayIndex = s;

  while(leftIndex < lenLeft && rightIndex < lenRight){
    if(left[leftIndex] < right[rightIndex]){
      arr[mainArrayIndex] = left[leftIndex];
      mainArrayIndex++;
      leftIndex++;
    }
    else{
      arr[mainArrayIndex] = right[rightIndex];
      mainArrayIndex++;
      rightIndex++;
    }
  }

  // 2 cases when left with extra element and right with extra element. 
    while(leftIndex < lenLeft) {
      arr[mainArrayIndex] = left[leftIndex];
      mainArrayIndex++;
      leftIndex++;
    }

    while(rightIndex < lenRight) {
      arr[mainArrayIndex] = right[rightIndex];
      mainArrayIndex++;
      rightIndex++;
    }

    // delete heap array 
    delete[] left;
    delete[] right;
}

void mergesort(int arr[], int s, int e){
  // Base case
  if(s >= e)
    return; //invalid array or single element
  
  // break
  int mid = (s+e)/2;
  //s -> mid -> left
  //mid+1 -> e -> right

  //recursive call
  // Left
  mergesort(arr,s,mid);

  // Right
  mergesort(arr,mid+1,e);
  merge(arr, s, e);
  
}


int main() {

  int arr[] = {2,1,6,9,4,5,0,15,-100};
  int size = sizeof(arr)/sizeof(arr[0]);
  int s = 0;
  int e = size - 1;
  mergesort(arr, s , e);
  cout << "After merge sort : " << endl;
  for(auto i:arr){
    cout << i << " ";
  }cout << endl;
  return 0;
}