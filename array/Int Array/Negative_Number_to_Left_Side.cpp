// Bring all Negative number to left side.

// Algorithm used : Dutch National Flag (also known as 2 pointer approach.)
// T.C : O(n), S.C : O(1) beacuse no extra space reather then array.


#include<iostream>
#include<vector>
using namespace std;

vector<int> shiftNegativeToLeft(vector<int> arr){
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
	return arr;
}

int main() {
	vector<int> arr = {3,-5,1,-1,214,5135};
	vector<int> arr2 = shiftNegativeToLeft(arr);
	for(int i=0;i<arr2.size();i++){
		cout << arr2[i] << " ";
	}

}