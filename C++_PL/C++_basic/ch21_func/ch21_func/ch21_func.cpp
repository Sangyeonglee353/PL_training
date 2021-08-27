#include <iostream>

using namespace std;

const float PI = 3.14; // 상수 선언
void cheers(int n);
float circle(int x);

int main()
{
	/*
	[함수란?]
	하나의 특별한 목적의 작업을
	수행하기 위해 독립적으로
	설계된 코드의 집합
	호출한 함수에게 값을
	되돌려주는,
	return value가 있는 함수와
	없는 함수로 분류
	> 배열은 리턴을 할 수 없다.
	> 단, 배열을 구조체나 공용체로 구성한다면 가능
	*/

	/*
	1. 함수 정의 제공
	2. 함수 원형 제공
	3. 함수 호출
	*/

	/*
	[함수의 유형]
	1. 리턴값이 있는 타입

	typename functionName(parameterList)
	{
		statement(s);
		return value;
	}
	2. 리턴값이 없는 타입

	void functionName(parameterList)
	{
		statement(s);
		return; // 생략될 수 있음
	}
	*/
	
	int a;
	cout << "하나의 수를 입력하십시오." << endl;
	cin >> a;
	cheers(a);

	int b;
	cout << "원의 반지름 길이를 입력하십시오." << endl;
	cin >> b;
	float c = circle(b);
	cout << "원의 넓이는 " << c << " 입니다." << endl;

	return 0;
}

void cheers(int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
	}
}

float circle(int x)
{
	return x * x * PI;
}
