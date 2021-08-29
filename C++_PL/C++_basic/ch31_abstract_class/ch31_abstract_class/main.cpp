#include "Stock.h"

int main() {
	// 추상화와 클래스
	// 데이터형이란 무엇인가?
	// 데이터형을 대상으로 어떠한 연산을 수행할 수 있는가?
	// 클래스란?
	// 추상화를 사용자 정의 데이터형으로 변환해주는 수단
	// 추상화란?
	// 어떠한 객체를 사실적으로 표현하는 것이 아니라,
	// 공통된 특징을 간결한 방식으로, 이해하기 쉽게 표현하는 것
	/*
	1. 클래스 선언
	2. 클래스 매서드 정의
	*/

	// 생성자에 매개변수를 받을 수 있도록 변경했을 시
	// 아래와 같이 두가지 형태로 매개변수를 선언할 수 있다.
	
	cout << "생성자를 이용해 객체 생성\n";
	/*
	1. Stock temp = Stock("Panda", 100, 1000);
	2. Stock temp("Panda", 100, 1000);
	*/
	Stock temp("Panda", 100, 1000);

	cout << "디폴트 생성자를 이용하여 객체 생성\n";
	Stock temp2;

	cout << "temp를 temp2에 대입\n";
	temp2 = temp;

	cout << "\ntemp 출력\n";
	temp.show();
	cout << "\ntemp2 출력\n";
	temp2.show();

	cout << "\n생성자를 이용하여 temp 내용 재설정\n";
	temp = Stock("Coding", 200, 1000);

	cout << "\n재설정된 temp 출력\n";
	temp.show();

	//Stock temp;
	// temp.acquire("Panda", 100, 1000);
	/*temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();*/

	return 0;
}