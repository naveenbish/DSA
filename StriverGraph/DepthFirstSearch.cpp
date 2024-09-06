#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void DFS(vector<int> adj[], int a, int vArr[], vector<int>& dfs){

  dfs.push_back(a);
  vArr[a] = 1;

  // recursion
  for(auto i:adj[a]){
    if(!vArr[i]){
      DFS(adj, i, vArr,dfs);
    }
  }
}



int main(){
  int n,m;

  cout << "Input : " << endl;
  cin >> n >> m;
  vector<int> adj[n+1];

  for(int i=0;i<m;i++){
    int v,y;
    cin >> v >> y;
    adj[v].push_back(y);
    adj[y].push_back(v);
  }
 
  cout << "Adj List : " << endl;
  for(int i=1;i<=n;i++){
    cout << "node " << i << ": ";
    for(int j:adj[i]){
      cout << "( " << j << " )";
    }
    cout << endl;
  }

  cout << endl;
  int vArr[n+1] = {0};
  vector<int> dfs;
  DFS(adj, 1,vArr,dfs);
  for(auto i:dfs){
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
