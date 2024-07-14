#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph {
public:
    unordered_map<int, list<int>> adjList;

    void addNodes(int u, int v, int dir) {
        adjList[u].push_back(v);
        // dir=0 means undirected
        if (dir == 0) {
            adjList[v].push_back(u);
        }
    }

    void print() {
        for (auto i : adjList) {
            cout << i.first << "->";
            for (auto j : i.second) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    cout << "How many edges? ";
    int m = 0;
    cin >> m;
    graph g;
    for (int i = 0; i < m; i++) {
        int u, v;
        cout << "Enter your nodes: ";
        cin >> u >> v;
        g.addNodes(u, v, 0);
    }
    g.print();
    return 0;
}
