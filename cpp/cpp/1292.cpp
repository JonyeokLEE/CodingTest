#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    vector<int> sequence;
    for (int i = 1; sequence.size() < B; ++i) {
        for (int j = 0; j < i; ++j) {
            sequence.push_back(i);
            if (sequence.size() >= B) break;
        }
    }
    int sum = 0;
    for (int i = A - 1; i < B; ++i) {
        sum += sequence[i];
    }

    cout << sum << endl;

    return 0;
}