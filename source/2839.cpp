#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;

    // 가능한 최대 5kg 봉지를 사용하면서 3kg 봉지로 보완
    while (N >= 0) {
        if (N % 5 == 0) { // 5kg 봉지로 나누어 떨어지는 경우
            count += N / 5;
            cout << count << endl;
            return 0;
        }
        N -= 5; // 그렇지 않으면 3kg 봉지를 하나 사용
        count++;
    }

    // 정확히 나눌 수 없는 경우
    cout << -1 << endl;
    return 0;
}
