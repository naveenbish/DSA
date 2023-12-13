#include<iostream>
using namespace std;

void sepNegPos(int arr[],int size){
    for(int i=0;i<size+1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<0){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    int arr[10] = {23,-7,12,-10,-11,40,60,-1,123,10};
    int size = 10;
    sepNegPos(arr, size); 
    for(int i:arr){
        cout << i << " ";
    }
    cout << endl;
}
