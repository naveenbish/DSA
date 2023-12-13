#include<iostream>
using namespace std;

int main() {

  int arr[] = {10,20,30,40,50};
  int size = sizeof(arr)/sizeof(arr[0]);
  int target;
  cin >> target;
  int count = 0;
  for(int i=0;i<size;i++){
    if(target == arr[i])
      count++;
  }

  if(count > 0)
    cout << "Present";
  else
    cout << "Not Present";
  
  cout << endl;
  
  return 0;
}