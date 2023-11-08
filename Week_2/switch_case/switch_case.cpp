#include<iostream>
using namespace std;

// Defination and usecase : We use switch case to write nested if else conditions more clearly in switch case syntax. you can differenciate if-else and switch case implementations done below.

int main(){

  float a,b;
  cout << "Enter Two values : ";
  cin >> a >> b;
  int op;
  cout << "What operation you want to do?" << endl;
  cout << "Enter 0 -> Add , 1 -> Sub , 2 -> * , 3 -> / , other number result in invalid output."<< endl;
  cin >> op;

  // if(op == 0)
  //   cout << a + b;
  // else if(op == 1)
  //   cout << abs(a - b);
  // else if(op == 2)
  //   cout << a * b;
  // else if(op == 3)
  //   cout << a / b;
  // else
  //   cout << "Invalid input";

  switch(op){
    case 0: cout << a + b;
    break;
    case 1: cout << abs(a - b);
    break;
    case 2: cout << a * b;
    break;
    case 3: cout << a / b;
    break;
    default: cout << "Invalid input";
  }
  
  cout << '\n';
  
  return 0;
}