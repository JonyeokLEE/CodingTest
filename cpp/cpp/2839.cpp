#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;

    // ������ �ִ� 5kg ������ ����ϸ鼭 3kg ������ ����
    while (N >= 0) {
        if (N % 5 == 0) { // 5kg ������ ������ �������� ���
            count += N / 5;
            cout << count << endl;
            return 0;
        }
        N -= 5; // �׷��� ������ 3kg ������ �ϳ� ���
        count++;
    }

    // ��Ȯ�� ���� �� ���� ���
    cout << -1 << endl;
    return 0;
}
