#include <iostream>

using namespace std;

int main()
{
	// 반복문이란?
	char a[10] = { 'a', 'b', 'c', 'd', 'e' };

	/*cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;*/

	// i++를 for문 내부에 사용해도 된다.
	for (int i = 0; i < 5; i++) {
		// code
		cout << a[i] << endl;
		cout << i << "번째입니다." << endl;
	}

	/*
	1. 반복문에 사용할 카운터의 값을 초기화
	2. 반복문을 진행할 것인지 '조건 검사'
	3. 반복문 몸체를 수행합니다.
	4. 카운터의 값을 변화합니다.
	*/
	
	// 증가 연산자, 감소 연산자
	int b = 10;
	int c = 10;

	cout << "b는 " << b << ", c는" << c << endl;
	cout << "b++는 " << b++ << endl;
	cout << "++c는 " << ++c << endl;
	
	/*
	증가연산자
	a++ : a를 출력하고 a에 1을 더한다.
	++a : a에 1을 더하고 a를 출력한다.
	
	위의 결과는 아래와 같다.
	a = a + 1;

	*/
	
	/*
	관계 표현식
	<  : 좌항이 우항보다 작다.
	<= : 좌항이 우항보다 작거나 같다.
	>  : 좌항이 우항보다 크다.
	>= : 좌항이 우항보다 크거나 같다.
	== : 좌항과 우항이 같다.
	!= : 좌항과 우항이 같지 않다.
	*/

	return 0;
}