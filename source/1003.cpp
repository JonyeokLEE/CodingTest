#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n) {
    vector<int> count0(n + 1, 0);
    vector<int> count1(n + 1, 0);

    count0[0] = 1;
    count1[0] = 0;
    count0[1] = 0;
    count1[1] = 1;

    for (int i = 2; i <= n; i++) {
        count0[i] = count0[i - 1] + count0[i - 2];
        count1[i] = count1[i - 1] + count1[i - 2];
    }

    printf("%d %d\n", count0[n], count1[n]);
}


int main() {
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n = 0;
		cin >> n;
		fibonacci(n);
	}
	return 0;
}