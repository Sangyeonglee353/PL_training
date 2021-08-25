#include <iostream>

using namespace std;

int main() {
	// 공용체(union)
	// 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.
	// 이전 데이터값이 소실됨
	// 장점: 메모리 절약

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;
	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;


	// 열거체(enum) => python의 for문 index/enumerate()와 비슷하다.
	// 기호 상수를 만드는 것에 대한 또 다른 방법

	enum spectrum { red, orange, yellow, green,
	blue, violet, indigo, ultraviolet};

	/* 열거체 기호 상수를 직접 지정도 가능
	enum spectrum {
		red=0, orange=2, yellow=4, green,
		blue, violet, indigo, ultraviolet
	};
	*/
	
	/*
	1. spectrum을 새로운 데이터형 이름으로 만듭니다.
	2. red, orange, yellow.. 0에서부터 7까지 정수 값을 각각
	나타내는 기호 상수로 만듭니다.
	*/

	spectrum a = orange;
	/* 기호로 인식하기 때문에 산술연산 불가능
	spectrum a = orange + yellow;
	*/
	cout << a << endl;

	// 정수형으로 저장하여 계산하면 가능
	int b;
	b = blue;
	b = blue + 3;

	cout << b << endl;
	return 0;
}