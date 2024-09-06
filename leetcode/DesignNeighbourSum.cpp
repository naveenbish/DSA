#include<iostream>
#include<vector>
using namespace std;

int main() {
  vector<vector<int>> grid;
  vector<int> a = {1,2,3};
  grid.push_back(a);
  cout << grid[0].size() << endl;
  cout << grid[0][0] << endl;
  return 0;
}
