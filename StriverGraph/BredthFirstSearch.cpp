#include<iostream>
#include<vector>
#include<queue>
using namespace std;


vector<int> BFS(int n, vector<int> adj[]){
  int vArr[n+1] = {0};
  vArr[1] = 1;
  queue<int> q;
  q.push(1);
  vector<int> bfs;
  while(!q.empty()){
    int node = q.front();
    q.pop();
    bfs.push_back(node);
    for(auto i:adj[node]){
      if(!vArr[i]){
        vArr[i] = 1;
        q.push(i);
      }
    }
  }
  return bfs;
}



int main(){
  int n,m;
  cin >> n >> m;
  vector<int> adj[n+1];

  for(int i=0;i<m;i++){
    int v,y;
    cin >> v >> y;
    adj[v].push_back(y);
    adj[y].push_back(v);
  }

  vector<int> ans = BFS(n,adj);
  cout <<"size : " << ans.size() << endl;
  for(int i=0;i<ans.size();i++){
    cout << ans[i] << " ";
  }

  cout << endl;

  /*for(int i=1;i<=n;i++){*/
  /*  cout << "node " << i << ": ";*/
  /*  for(int j:adj[i]){*/
  /*    cout << "( " << j << " )";*/
  /*  }*/
  /*  cout << endl;*/
  /*}*/

  return 0;
}
