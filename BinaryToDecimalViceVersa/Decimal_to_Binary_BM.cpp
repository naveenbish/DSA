#include<iostream>
#include<cmath>
using namespace std;

// Bitwise Method

int decimalToBinary(int num){
    int result = 0;
    int plus = 0;
    for(int i=num; i > 0 ; i = i >> 1){
        int bit = i&1;
        result = bit*pow(10, plus++) + result;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number to find its binary equivalent : ";
    cin >> num;

    cout << decimalToBinary(num) << endl;

    return 0;
}