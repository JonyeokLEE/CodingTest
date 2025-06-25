#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n = 0, m = 0, v = 0;

	cin >> n >> m >> v;


	vector<int> arr(3);
	vector<vector<bool>> edge(n + 1, vector<bool>(n + 1, false));
	vector<bool> dfs_visited(n + 1,false);
	vector<bool> bfs_visited(n + 1,false);
	for (int i = 0;i < m;i++) {
		int a = 0, b = 0;
		cin >> a >> b;

		edge[a][b] = true;
		edge[b][a] = true;
	}

	stack<int> stk;
	stk.push(v);

	while (!stk.empty()) {
		int now = stk.top();
		stk.pop();
		if (dfs_visited[now]) continue;
		dfs_visited[now] = true;
		cout << now << " ";
		for (int i = n;i >=1;i--) {
			if (!dfs_visited[i]&&edge[now][i]) stk.push(i);
		}
	}
	cout << "\n";
	
	queue<int> que;
	que.push(v);
	while (!que.empty()) {
		int now = que.front();
		que.pop();
		if (bfs_visited[now]) continue;
		bfs_visited[now] = true;
		cout << now << " ";
		for (int i = 1;i <= n;i++) {
			if (!bfs_visited[i] && edge[now][i]) que.push(i);
		}
	}

	return 0;
}