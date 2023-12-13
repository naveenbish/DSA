#include<iostream>
#include<vector>
using namespace std;

void printAllPath(int maze[][4],int row,int col,int srcx,int srcy,string output){
  // Base Case 
  if(srcx == row-1 && srcy == col-1){
    cout << output << endl;
    return;
  }

  // Recursive Call
  
  // UP
  if(isSafe()){
    // mark visited
    // Recursion Call
    // Backtracking
  }
  // RIGHT
  if(isSafe()){}
  // Down
  if(isSafe()){}
  // Left
  if(isSafe()){}

}

int main() {
  int maze[4][4] = {
    {1,0,0,0},
    {1,1,0,0},
    {1,1,0,0},
    {1,1,1,1}
  };
  int row = 4;
  int col = 4;
  int srcx= 0;
  int srcy= 0;
  string output = "";
  vector<vector<bool>> visted(row, vector<bool>(col, false));
  printAllPath(maze,row,col,srcx,srcy,output);

  return 0;
}