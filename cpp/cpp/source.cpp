#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[9] = { 0, };
bool visited[9] = { false, };

int n = 0, m = 0;

void dfs(int index) {

	if (index == m) {
		for (int i = 1;i <= m;i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1;i <= n;i++) {
		if (!visited[i]) {
			arr[index] = i;
			visited[i] = true;
			dfs(index+1);
			visited[i] = false;
		}
	}
}

int main() {
	cin >> n >> m;
	dfs(1);
	return 0;
}