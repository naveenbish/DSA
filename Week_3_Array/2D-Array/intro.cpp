#include<iostream>
using namespace std;

void print(int arr[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    // Declare and Initilize 2D-Array
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // Printing Array
    print(arr);

    return 0;

}
