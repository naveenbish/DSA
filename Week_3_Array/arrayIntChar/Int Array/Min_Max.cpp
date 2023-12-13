#include<iostream>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    long long min = a[0];
    long long max = a[0];
    long long result1=min, result2=max;
    int i = 0;
    while(i<n){
        if(a[i] > min){
            result1 = a[i]; //Max no.
            min = result1;
        }
        i++;
    }
    int j = 0;
    max = result1;
    while(j<n){
        if(a[j] < max){
            result2 = a[j]; //Min no.
            max = result2;
        }
        j++;
    }
    return make_pair(min, max);
}

int main() {
  int n = 6;
  long long a[6] = {15,7,12,10,8,15};
  cout << "Min = " << getMinMax(a,n).first << endl;
  cout << "Max = " << getMinMax(a,n).second << endl;
  return 0;
}