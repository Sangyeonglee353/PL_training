#include <iostream>

using namespace std;

int main()
{
	/*
	+: 두 개의 피연자의 합을 계산합니다.
	-: 첫 번째 피연산자에서 두 번재 피연산자의 차를 계산합니다.
	*: 두 개의 피연산자의 곱을 계산합니다.
	/: 첫 번째 피연산자에서 두 번째 피연산자를 나눕니다.
	>> 두 개의 피연산자가 모두 정수이면 결과값은 '몫'입니다.
	%: 첫 번째 피연산자를 두 번째 피연산자로 나누어 나머지를 구합니다.
	예를 들어서 19를 6으로 나누게 되면 그 값은 1입니다.
	부동 소수점(실수) 사용할 수 없습니다.
	*/

	int a = 3;
	int b = 2;

	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;
	int g = a % b;

	cout << "c: " << c << endl;
	cout << "d: " << d << endl;
	cout << "e: " << e << endl;
	cout << "f: " << f << endl;
	cout << "g: " << g << endl;

	int h = 5;

	// C++가 복잡한 산술 연산을 수행할 수 있을가? > 있습니다.

	int multiple = a / b * h;

	cout << multiple;

	// auto: 자동으로 형식 지정
	auto n = 100; // n은 int
	auto x = 1.5; // x는 float
	auto y = 1.3e12L; // y는 long long

	// 3개의 float형 변수
	auto aa = 0.0;
	float bb = 0;
	auto cc = 0;
	
	return 0;
}