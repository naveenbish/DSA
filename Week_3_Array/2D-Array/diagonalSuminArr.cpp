#include<iostream>
using namespace std;

int diagonalSum(int arr[][5], int row, int col){

    // This logic is for diagonal 
    // * # # # #
    // # * # # #
    // # # * # #
    // # # # * #
    // # # # # *

    int sum = 0;
    for(int i=0;i<row;i++){
        sum = sum + arr[i][i];
    }
    
    // This below logic is for diagonal 
    // # # # # *
    // # # # * #
    // # # * # #
    // # * # # #
    // * # # # #
    
    //int sum = 0;
    //int j = 4;
    //for(int i=0;i<row;i++){
      //  sum = sum + arr[i][j-i];
    //}

    return sum;
}

int main() {
    
    int arr[5][5] = {
        {10,2,3,4,1},
        {1,20,3,2,5},
        {1,2,3,4,5},
        {1,4,3,40,5},
        {5,2,3,4,50}
    };
    // We have to find the sum of diagonals where rows and cols are same.
   cout << diagonalSum(arr, 5, 5) << endl; 

    return 0;
}
