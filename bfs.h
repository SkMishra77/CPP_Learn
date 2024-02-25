//
// Created by Lenovo on 25-02-2024.
//

#include "primary.h"

#ifndef P1_BFS_H
#define P1_BFS_H


void bfs(int n, int start, vector<vector<int>> &g, vector<int> &visited, queue<int> &q) {
    q.push(start);

    while (!q.empty()) {
        auto st = q.front();
        q.pop();
        visited[st] = 1;
        print(st);
        for (int i = 0; i < n; ++i) {
            if (g[st][i] == 1 && visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

void bfs_level_order(int n, int start, vector<vector<int>> &g, vector<int> &visited, queue<int> &q) {
    q.push(start);

    while (!q.empty()) {
        auto k = q.size();
        while (k--) {
            auto st = q.front();
            q.pop();
            visited[st] = 1;
            print(st);
            for (int i = 0; i < n; ++i) {
                if (g[st][i] == 1 && visited[i] == 0) {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
        cout<<endl;
    }
}

[[maybe_unused]] int bfs_start() {

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

    bfs_level_order(n, 0, g, visited, q);
    return 0;
}


#endif //P1_BFS_H
