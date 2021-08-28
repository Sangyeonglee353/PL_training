#include <iostream>

using namespace std;

void swapA(int& a, int& b);
void swapB(int* a, int* b);
void swapC(int a, int b);

int main()
{
	// 참조(reference)란? C++에서 새로 등장한 개념
	// 미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대용 이름
	// [목적] 함수의 매개변수에 사용
	/*
	[특징]
	1. 복사본이 아닌 원본 데이터를 가지고 연산한다.
	>> 구조체 함수의 경우 복사본을 사용
	>> 값을 이용한 함수의 경우 복사본을 사용
	[사용 시기]
	1. 원본의 데이터가 너무 큰 경우 실행 속도를 높히기 위해서
	[형태]
	참조변수: 
	int a;
	int& b = a;
	*/

	int wallet1 = 100;
	int wallet2 = 200;

	cout << "최초 상태" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << endl << "[참조를 이용한 값의 교환]" << endl;
	swapA(wallet1, wallet2);
	cout << "참조 교환 이후 상태" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << endl << "[포인터를 이용한 값의 교환]" << endl;
	swapB(&wallet1, &wallet2);
	cout << "포인터를 이용한 교환 이후 상태" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
	
	cout << endl << "[값을 이용한 값의 교환]" << endl;
	swapC(wallet1, wallet2);
	cout << "값을 이용한 교환 이후 상태" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	/*
	[결과]
	1. 참조와 포인터 매개변수의 경우 원본을 이용하므로
	원본 데이터의 값에도 변화가 생긴다.
	2. 값 매개변수의 경우 복사본을 이용하므로
	원본 데이터에는 영향을 주지 않는다.
	>> 이는 구조체 매개변수도 동일하다.

	[주목할 점]
	1. 함수의 매개변수(argument)의 입력형태가 다르다.
	참조 매개변수   : 일반값
	포인터 매개변수 : 주소값(&)
	값 매개변수     : 일반값
	2. 함수의 파라미터(parameter)의 형태가 다르다.
	참조 파라미터   : 참조변수(&)
	포인터 파라미터 : 포인터변수(*)
	값 파라미터     : 일반값
	*/

	return 0;
}

void swapA(int& a, int& b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void swapB(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void swapC(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}