#include <iostream>
using namespace std;

//제네릭 함수 add()
//함수를 일반화. 매개 변수 타입을 지정.
template <class T> // 템플릿을 선언 후 제네릭 타입 선언하는 키워드 입력
T add(T data[], int n) {// add 함수 구체화
	T sum = 0; // sum값 초기화
	for (int i = 0; i < n; i++) {
		sum += data[i];
	}
	return sum; // add 함수 구체화. (배열에서 받아와서 더해주는)
}

int main() {
	int x[] = { 1,2,3,4,5 }; // 배열 원소 5개 지정
	double d[] = { 1.2,2.3,3.4,4.5,5.6,6.7 }; // 배열 원소 6개 지정

	cout << "sum of x[] = " << add(x, 5) << endl; //배열 x와 원소 5개의 합을 계산
	cout << "sum of d[] = " << add(d, 6) << endl; //배열 d와 원소 6개의 합을 계산
}