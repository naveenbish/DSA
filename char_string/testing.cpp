#include <iostream>
#include <vector>
#include <string>
using namespace std;

long long maxSubarraySum(vector<int> arr)
{
    int i = 0;
    long long sum = arr[i];
    long long ans = 0;
    int j = i+1;
    while(i<j){
        sum = sum + arr[j];
        if(sum > ans){
            ans = sum;
        }
        if(i == arr.size()-1)
            break;
        if (j == arr.size()-1 || i < arr.size()) {
            i++;
            sum = i;
            j=i+1;
            cout << "i :" << i << endl;
            cout << "j : " << j << endl;
        }
        j++;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1,2,7,-4,3,2,-10,9,1};
    cout << maxSubarraySum(arr) << endl;
    return 0;
}