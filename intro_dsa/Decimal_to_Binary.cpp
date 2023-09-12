#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int num){
    int result = 0;
    int plus = 0;
    for(int i=num; i > 0 ; i = i/2){
        int bit = i%2;
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