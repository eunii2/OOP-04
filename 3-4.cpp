#include <iostream>
using namespace std;

//제네릭 함수 reverseArray()
//함수를 일반화. 매개 변수 타입을 지정.
template <class T> //템플릿을 선언 후 제네릭 타입 선언하는 키워드 입력
void reverseArray(T x[], int n) {
    for (int i = 0; i < n / 2; i++) {
        T tmp;
        tmp = x[i];
        x[i] = x[n - i - 1];
        x[n - i - 1] = tmp;
    } //반복문을 통해 원소의 순서들을 바꿔줌
}
int main() {
    int x[] = { 1,10,100,5,4 }; //배열 원소 5개 지정.
    reverseArray(x, 5);
    for (int i = 0; i < 5; i++)
        cout << x[i] << ' '; // 4 5 100 10 1이 출력된다.
    //reverseArray함수를 통해 배열의 원소 순서가 반대로 뒤집힘.
    cout << endl;
}