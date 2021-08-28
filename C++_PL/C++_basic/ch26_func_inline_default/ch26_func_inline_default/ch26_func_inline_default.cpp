#include <iostream>

using namespace std;

inline float square(float x) { return x * x; };

int main() {
	// 인라인 함수
	// 프로그램 실행 속도 향상
	// 인라인 함수코드가 복잡해지면 실질적으로 속도향상은 미비
	int a = 5;
	cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는? " << endl;
	float b = square(a);
	cout << b << endl;
	
	return 0;
}