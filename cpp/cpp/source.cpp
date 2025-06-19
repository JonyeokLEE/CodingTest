#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> arr;

	int n = 0;
	cin >> n;
	int i = 0;
	for (int j = 0;j < n;j++) {
		cin >> i;
		arr.push_back(i);
	}

	sort(arr.begin(), arr.end());

	for (int j = 0;j < n;j++) {
		cout << arr[j] << "\n";
	}

	return 0;
}