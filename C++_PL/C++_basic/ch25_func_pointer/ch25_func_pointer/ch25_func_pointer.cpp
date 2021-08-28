#include <iostream>

using namespace std;

int func(int n);

int main() {
	// 함수를 지시하는 포인터
	// 어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용할 수 있다.
	/*
	1. 함수의 주소를 얻는다.
	2. 함수를 지시하는 포인터를 선언한다.
	3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출한다.
	*/

	// 함수 뒤 매개변수 괄호를 적지 않으면 포인터처럼 해당 주소를 가리킨다.
	cout << "함수의 주소 : " << func << endl;

	int(*pf)(int);
	pf = func;

	cout << (*pf)(3) << endl;

	return 0;
}

int func(int n)
{
	return n +1;
}
