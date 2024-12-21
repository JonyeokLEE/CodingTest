#include <bits/stdc++.h>
using namespace std;

int** connection;
int n, m;

int bfs(int start, int end) {
    queue<pair<int, int>> que;
    que.push({ start, 0 });
    vector<bool> visited(n + 1, false);
    visited[start] = true;

    while (!que.empty()) {
        int now = que.front().first;
        int distance = que.front().second;
        que.pop();

        if (now == end) return distance;

        for (int i = 1; i <= n; i++) {
            if (!visited[i] && connection[now][i]) {
                visited[i] = true;
                que.push({ i, distance + 1 });
            }
        }
    }
    return 0;
}

int main() {
    cin >> n >> m;

    connection = new int* [n + 1];
    for (int i = 0; i <= n; i++) {
        connection[i] = new int[n + 1];
        memset(connection[i], 0, (n + 1) * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        connection[a][b] = 1;
        connection[b][a] = 1;
    }

    vector<int> kevinbacon(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j) {
                kevinbacon[i] += bfs(i, j);
            }
        }
    }

    int min_person = 1;
    int min_value = kevinbacon[1];
    for (int i = 2; i <= n; i++) {
        if (kevinbacon[i] < min_value) {
            min_person = i;
            min_value = kevinbacon[i];
        }
    }

    cout << min_person << endl;

    for (int i = 0; i <= n; i++) {
        delete[] connection[i];
    }
    delete[] connection;

    return 0;
}
