#include <iostream>
using namespace std;

int big(int a, int b) {
    int max = 100;
    int big = a;
    if (big < b)
        big = b;
    if (big > max)
        big = max;
    return big;
} // max=100으로 설정을 해놓고, 나머지 입력될 a와 b값과 비교.

int big(int a, int b, int c) {
    int max = c;
    int big = a;
    if (big < b)
        big = b;
    if (big > max)
        big = max;
    return big;
} // 3가지 수 a,b,c를 입력 받아 세 값을 비교.
// 함수 중복을 통해 big 함수 두개를 작성.

int main() {
    int x = big(3, 5); // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
    int y = big(300, 60); // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
    int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
    cout << x << ' ' << y << ' ' << z << endl;
}