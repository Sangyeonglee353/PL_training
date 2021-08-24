#include <iostream>
#include <climits>
using namespace std;

// f12로 함수의 정의 확인

int main()
{
	//정수형: 소수부가 없는 수
	//음의 정수, 0, 양의 정수
	//short, int, long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;

	cout << "short은 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;

	cout << "long은 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;

	cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl << endl;

	// 음수를 사용하지 않는 경우, 음수 입력시 시프트 되어 값 출력
	unsigned int a = 1;
	unsigned short b = 1;
	unsigned long c = 1;
	unsigned long long d = 1;

	// 실수형 : 소수부가 있는 수

	float k = 3.14;
	int j = 3.14;

	cout << k << " " << j << endl;

	return 0;
}