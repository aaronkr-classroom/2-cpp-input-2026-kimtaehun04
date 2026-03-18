#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    // 두 숫자 입력받기
    cout << "첫 번째 숫자를 입력하세요: ";
    cin >> num1;

    cout << "두 번째 숫자를 입력하세요: ";
    cin >> num2;

    // 비교 및 결과 출력
    if (num1 > num2) {
        cout << num1 << "이(가) " << num2 << "보다 더 큰 수입니다." << endl;
    }
    else if (num2 > num1) {
        cout << num2 << "이(가) " << num1 << "보다 더 큰 수입니다." << endl;
    }
    else {
        cout << "두 숫자는 같습니다. (" << num1 << ")" << endl;
    }

    return 0;
}