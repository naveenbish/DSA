#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n + 1]; // Vector of pairs to store nodes and weights
    for (int i = 0; i < m; i++) {
        int v, y, z;
        cin >> v >> y >> z;
        pair<int, int> nodeWeight1(y, z);
        pair<int, int> nodeWeight2(v, z);
        adj[v].push_back(nodeWeight1);
        adj[y].push_back(nodeWeight2);
    }
    cout << "Here's the Group Edges...." << endl;

    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": ";
        for (pair<int,int> p : adj[i]) {
            cout << "(" << p.first << ", " << p.second << ") ";
        }
        cout << endl;
    }

    return 0;
}
