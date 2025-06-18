#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int min_package = INT_MAX, min_piece = INT_MAX;

    for (int i = 0; i < m; i++) {
        int package, piece;
        cin >> package >> piece;
        min_package = min(min_package, package);
        min_piece = min(min_piece, piece);
    }
    int cost_by_package = (n / 6) * min_package + min(min_package, (n % 6) * min_piece);
    int cost_by_pieces = n * min_piece;

    int result = min(cost_by_package, cost_by_pieces);

    cout << result;
    return 0;
}
