#include <iostream>
using namespace std;

//원형 선언
void f(char c = ' ', int line = 1);

//함수 구현
void f(char c, int line){
	for (int i = 0; i < line; i++)
	{
		for (int p = 0; p < 10; p++)
			cout << c;
		cout << endl;
	}
}

int main() {
	f( );
	f('%');
	f('@', 5);
}