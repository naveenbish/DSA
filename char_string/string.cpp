#include<iostream>
#include<string.h>
using namespace std;

int main() {
  string name;
  cout << "Enter Your Name : ";
  // cin >> name;
  getline(cin, name);
  cout << "Your name is "<< name << endl;

  return 0;
}