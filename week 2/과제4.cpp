#include <iostream>
using namespace std;

int main() {
    int product = 1;

    // (1, 10) 개구간: 1과 10을 제외한 2부터 9까지
    for (int i = 2; i <= 9; i++) {
        product *= i;
        cout << "현재 i = " << i << ", 누적 곱 = " << product << endl;
    }

    cout << "\n(1, 10) 범위에 있는 숫자들의 곱: " << product << endl;

    return 0;
}