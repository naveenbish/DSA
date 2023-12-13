#include<iostream>
using namespace std;

void printArr(int arr[][4],int row,int col){
    // Printing Array
    for (int i = 0; i < row; i++) {
        for(int j=0; j < row; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
}

void transposeMatrix(int arr[][4], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main(){
    int arr[4][4] = {
        {2,4,6,12},
        {8,5,8,12},
        {7,9,1,23},
        {3,92,1,3},
    };
    cout << "Before Transpose" << endl;
    printArr(arr,4,4);
    transposeMatrix(arr, 4, 4);
    cout << "After Transpose" << endl;
    printArr(arr,4,4);
    return 0;
}
