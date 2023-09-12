// Bring all Negative number to left side.

// Algorithm used : Dutch National Flag (also known as 2 pointer approach.)
// T.C : O(n), S.C : O(1) beacuse no extra space reather then array.


#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,-3,4,-5,6,-1,-1,0,241,-214,-5135};

    // for(int i=0;i<arr.size();i++){
    //     cout << arr[i] << " ";
    // }

    int start=0,end=arr.size()-1;

    while(start<end){
        if(arr[end]<0 && arr[start]<0){
            start++;
        }else if(arr[end]<0){
            swap(arr[end],arr[start]);
            start++;
            end--;
        } else {
            end--;
        }
    }

    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }

}