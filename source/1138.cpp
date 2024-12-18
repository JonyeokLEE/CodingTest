#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	vector<int> line(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> line[i];
	}
	
	int count = 1;
	while (count <= n) {
		int min_value =999;
		int min_index = 0;
		for (int i = 1; i <= n; i++) {
			if (line[i] >= 0 && min_value > line[i]) {
				min_value = line[i];
				min_index = i;
			}
		}
		line[min_index] = -1;
		printf("%d ", min_index);
		int i = 1;
		while (i < min_index) {
			line[i] -= 1;
			i++;
		}
		count++;
	}
	return 0;
}