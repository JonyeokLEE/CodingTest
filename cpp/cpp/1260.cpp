#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0, m = 0, v = 0;
	cin >> n >> m >> v;

	vector<vector<bool>> edge(n+1, vector<bool>(n+1, false));
	vector<bool> dfs_visited(n + 1);
	vector<bool> bfs_visited(n + 1);
	for (int i = 0; i < m; i++) {
		int a = 0, b = 0;
		cin >> a >> b;
		edge[a][b] = true;
		edge[b][a] = true;
	}
	stack<int> stk;
	queue<int> que;
	stk.push(v);
	que.push(v);
	while (!stk.empty()) {
		int now = stk.top();
		stk.pop();
		if (dfs_visited[now]) continue;
		dfs_visited[now] = true;
		printf("%d ", now);
		for (int i = n; i >=1; i--) {
			if (edge[now][i]&&!dfs_visited[i]) stk.push(i);
		}
	}printf("\n");
	while (!que.empty()) {
		int now = que.front();
		que.pop();
		if (bfs_visited[now]) continue;
		bfs_visited[now] = true;
		printf("%d ", now);
		for (int i = 1; i <=n; i++) {
			if (edge[now][i] && !bfs_visited[i]) que.push(i);
		}
	}
	return 0;
}