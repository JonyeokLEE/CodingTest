#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    scanf("%d", &n); // scanf로 입력
    priority_queue<int, vector<int>, greater<int>> min_heap;

    while (n--) {
        int a;
        scanf("%d", &a); // scanf로 입력

        if (a > 0) {
            min_heap.push(a);
        }
        else {
            if (min_heap.empty()) {
                printf("0\n"); // printf로 출력
            }
            else {
                printf("%d\n", min_heap.top());
                min_heap.pop();
            }
        }
    }
    return 0;
}
