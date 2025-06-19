#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int seperator(int num) {
	int result = 0;
	string str = to_string(num);

	for (char ch : str) {
		result += ch - '0';
	}

	return result;
}

int main() {
	int n = 0;
	cin >> n;

	int now = 1;
	int i = 0;
	while (now < n)
	{
		i = now + seperator(now);
		
		if (i == n) {
			cout << now;
			return 0;
		}
		now++;
	}

	cout << 0;
	return 0;
}