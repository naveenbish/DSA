#include<iostream>
#include<typeinfo>
using namespace std;

// Defination : Manual Type Casting, Which is done by the programmer.

int main(){

  // Example 1
  int num1 = 10;
  float num2 = 10.5;
  cout << typeid(num1 + int(num2)).name() << endl; // In this case we changed the type of num2 form float to int explicitly and while adding num1 + num2 we got int data type in return. Casting Operator is (int)

  // We have two stying for explicit type converstion.
  
  // 1st Styling type
  // `(int)num1` (C-style type casting): This is the older style of type casting in C and C++. It's also known as C-style type casting. When you use (int)num1, you are telling the compiler to treat num1 as an int. This style of casting is not type-safe and can lead to unexpected behavior or errors if the types are not compatible.
  // Example 2
  double num3 = 3.14159;
  int num4 = (int)num3;  // C-style type casting
  cout << num4 << endl;

  // 2nd Styling type
  // `int(num1)` (Functional-style type casting): This is the C++ functional-style type casting. It is considered a safer and more explicit way of performing type conversions. It's also known as C++ casting or constructor-style casting. With int(num1), you are essentially using the constructor of the target type (in this case, int) to perform the conversion. This style of casting is more type-safe and can prevent some potential issues.
  // Example 3
  double num5 = 3.14159;
  int num6 = int(num3);  // Functional-style type casting
  cout << num6 << endl;

  // Example 4
  float abc = 10/3;
  cout << abc << endl; // Here the value stored in abc is of int because value passed for operation in abc float variable are int data type.

  // Example 5
  float abcd = 10/float(3);
  cout << abcd << endl; // Here the value stored in abcd is of float now as compare to above example because We have used the explicit type conversion and turned any of operator to float and now the operation will return float value.

  return 0;
}