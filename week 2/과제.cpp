#include <iostream>

using namespace std;

// 1. 정사각형 출력
void drawSquare(int size) {
    cout << "=== 정사각형 (" << size << " x " << size << ") ===" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

// 2. 직사각형 출력
void drawRectangle(int width, int height) {
    cout << "=== 직사각형 (" << width << " x " << height << ") ===" << endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

// 3. 삼각형 출력 (직각삼각형)
void drawTriangle(int height) {
    cout << "=== 삼각형 (높이: " << height << ") ===" << endl;
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

// 4. 피라미드 삼각형 (정삼각형 모양)
void drawPyramid(int height) {
    cout << "=== 피라미드 삼각형 (높이: " << height << ") ===" << endl;
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < height - i; j++) {
            cout << " ";
        }
        int starCount = (*) - 1;
        for (int k = 0; k < starCount; k++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    drawSquare(5);
    drawRectangle(7, 3);
    drawTriangle(5);
    drawPyramid(5);
    return 0;
}