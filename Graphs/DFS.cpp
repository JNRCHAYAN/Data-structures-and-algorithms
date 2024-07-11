#include <iostream>
using namespace std;

const int MAXN = 30; 

void dfs(int graph[][MAXN], int n, bool visited[], int v) {
    cout << v << " ";
    visited[v] = true;

    for (int i = 0; i < n; ++i) {
        if (graph[v][i] && !visited[i]) {
            dfs(graph, n, visited, i);
        }
    }
}

int main() {
    int n; 
    cout << "Enter the number of vertices : ";
    cin >> n;

    int graph[MAXN][MAXN]; 
    cout << "Enter the adjacency matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    bool visited[MAXN] = {false}; 
    int start_vertex;
    cout << "Enter the starting vertex for DFS: ";
    cin >> start_vertex;
    cout << "DFS traversal starting from vertex " << start_vertex << ": ";
    dfs(graph, n, visited, start_vertex);
    cout << endl;

    return 0;
}
