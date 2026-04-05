#include <iostream>
using namespace std;

#define HEIGHT 8
#define WIDTH 8

// ASCII 계조 선택 함수
string brightnessToBlock(int brightness) {
    if (brightness >= 230) return "  ";   // 밝음
    else if (brightness >= 200) return "..";  // 밝은 영역
    else if (brightness >= 150) return "oo";  // 중간 밝기
    else if (brightness >= 100) return "OO";  // 어두움
    else return "##";                         // 가장 어두움
}

// 최대 밝기값 계산
int getMaxPixel(int image[HEIGHT][WIDTH]) {
    int maxVal = image[0][0];
    for (int i = 0; i < HEIGHT; ++i)
        for (int j = 0; j < WIDTH; ++j)
            if (image[i][j] > maxVal)
                maxVal = image[i][j];
    return maxVal;
}

// ASCII 이미지 출력 (가로 2배)
void printImage(int image[HEIGHT][WIDTH]) {
    cout << "8 X 8 Image:" << endl;
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            cout << brightnessToBlock(image[i][j]);
        }
        cout << endl;
    }
}

int main() {
    int image[HEIGHT][WIDTH] = {
        {10, 30, 55, 80, 120, 160, 200, 230},
        {20, 45, 70, 100, 140, 180, 220, 210},
        {35, 60, 90, 130, 170, 210, 240, 190},
        {50, 80, 115, 150, 190, 230, 255, 170},
        {40, 65, 100, 140, 175, 215, 235, 150},
        {25, 50, 80, 115, 155, 195, 210, 130},
        {15, 35, 60, 90, 130, 165, 185, 110},
        {5, 20, 40, 70, 105, 140, 160, 90}
    };

    printImage(image);

    int maxBrightness = getMaxPixel(image);
    cout << "\nMax: " << maxBrightness << endl;

    return 0;
}