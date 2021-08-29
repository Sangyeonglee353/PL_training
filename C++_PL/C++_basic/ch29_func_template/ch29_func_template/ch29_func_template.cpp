#include <iostream>

using namespace std;

// class 혹은 typeName
//template <class Any>
//Any sum(Any, Any);
//
//int main() {
//	// 객체 지향 프로그래밍의 목표 중 하나
//	// 일반화란?
//	// 데이터형에 상관 없이 일반적으로 범용적으로 사용할 수 있도록 만드는 것
//	// 함수 템플릿 -> 일반화 프로그래밍
//	// 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의한다.
//
//	int a = 3;
//	int b = 4;
//	cout << sum(a, b) << endl;
//
//	float c = 3.14;
//	float d = 1.592;
//	cout << sum(c, d) << endl;
//
//	// 첫번째 파마리터가 int형이므로 any의 type은 int로 잡힌다.
//	// 그래서 에러 발생
//	cout << sum(a, c) << endl;
//
//	return 0;
//}
//
//template<class Any>
//Any sum(Any a, Any b)
//{
//	return a+b;
//}

/* 
[에러 해결 방법]
1. 함수 오버로딩을 이용
*/

template <class Any>
Any sum(Any, Any);
template <class Any>
Any sum(int, Any);

int main() {
	int a = 3;
	int b = 4;
	// 오버로딩 간 두 개의 템플릿에 모두 일치하므로 에러발생
	// cout << sum(a, b) << endl;
	
	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl;
	
	// 함수 오버로딩으로 해결
	cout << sum(a, c) << endl;
	return 0;
}

template<class Any>
Any sum(Any a, Any b)
{
	return a+b;
}

template<class Any>
Any sum(int a, Any b)
{
	return a+b;
}
