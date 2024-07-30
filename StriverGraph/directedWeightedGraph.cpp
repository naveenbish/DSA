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
        pair<int, int> nodeWeight(y, z);
        adj[v].push_back(nodeWeight);
    }
    cout << "Here's the Group Edges...." << endl;

    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": ";
        for (pair<int,int> p : adj[i]) {
            cout << "(" << p.first << ", " << p.second << ") ";
        }
        cout << endl;
    }
    /*int nodeCount = 1; */
    /*for (vector<pair<int,int>> i: adj) {*/
    /*    cout << "Node " << nodeCount << ": ";*/
    /*    for (pair<int,int> p : i) {*/
    /*        cout << "(" << p.first << ", " << p.second << ") ";*/
    /*    }*/
    /*    nodeCount++;*/
    /*    cout << endl;*/
    /*}*/
    /**/
    return 0;
}
