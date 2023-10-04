#include<iostream>
#include<cmath>
using namespace std;

// Simple Method

int binaryToDecimal(int num){
    int sum = 0;
    int i = 0;
    while(num > 0){
      int mod = num%10;
      sum = sum + mod*(pow(2,i));
      num = num/10;
      i++;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number to find its Decimal Value of a Binary Number : ";
    cin >> num;

    cout << binaryToDecimal(num) << endl;

    return 0;
}