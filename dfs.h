//
// Created by Lenovo on 25-02-2024.
//

#ifndef P1_DFS_H
#define P1_DFS_H

#include "primary.h"

void dfs(int n, int start, vector<vector<int>> &g, vector<int> &visited) {
    print(start);
    visited[start] = 1;
    for (int i = 0; i < n; ++i) {
        if (g[start][i] == 1 && visited[i] == 0) {
            dfs(n, i, g, visited);
        }
    }
}

[[maybe_unused]] int dfs_start() {

    cout << "Enter Number of Nodes:: ";
    int n;
    cin >> n;

    vector<vector<int>> g(n, vector<int>(n, 0));
    cout << "Enter Adjacency Matrix:: ";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> g[i][j];
        }
    }

    vector<int> visited(n, 0);
    queue<int> q;

    dfs(n, 0, g, visited);
    return 0;
}

#endif //P1_DFS_H
