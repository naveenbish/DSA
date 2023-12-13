// Bring all Negative number to left side.

// Algorithm used : 2 pointer approach
// T.C : O(n), S.C : O(1) beacuse no extra space reather then array.
// Both the Pointer are starting from Left Side.

#include<iostream>
#include<vector>
using namespace std;

vector<int> shiftNegativeToLeft(vector<int> arr){
	int j=0,end=arr.size()-1;
	int i = 0;
	while(i < arr.size()){
		if(arr[j] < 0){
			j++;
		}
		else if(arr[i] < 0){
			swap(arr[j], arr[i]);
			j++;
		}
		i++;
	}

	
	return arr;
}

int main() {
	vector<int> arr = {1,-2,-3,4,-5,6,-7,8,-9,10};
	vector<int> arr2 = shiftNegativeToLeft(arr);
	for(int i=0;i<arr2.size();i++){
		cout << arr2[i] << " ";
	}

}