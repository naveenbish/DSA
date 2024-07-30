#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<int> adj[n+1];
  for(int i=0; i<m;i++){
    int v,y;
    cin >> v >> y;
    adj[v].push_back(y);
    /*adj[y].push_back(v);*/
  }
  cout << "Here's the Group Edges...." << endl;

  for(vector<int> i:adj){
    for(int j:i){
      cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}
