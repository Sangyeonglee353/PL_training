#ifndef STOCK
#define STOCK

#include <iostream>

using namespace std;

class Stock
{
	/*
	public과 private은 class에서 접근을 제어한다.
	private에 정의된 변수들을 변경하기 위해서는 public의 함수를 거쳐야만 한다.
	데이터에 접근을 불가함 -> 데이터 은닉(추상화의 한가지 예시)
	[public]
	1. 공개 멤버, 클래스
	2. 외부에서도 접근 가능
	[private]
	1. 비공개 멤버
	2. 클래스 내에서만 접근 가능
	3. 직접적인 Data는 private로 선언하여 데이터를 은닉시킨다.
	*/
public:
	// void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	// 변경된 부분
	Stock(string, int, float);
	Stock();
	~Stock();

private:
	string name;
	int shares;
	float share_val;
	double total_val;
	// 인라인 함수
	void set_total() { total_val = shares * share_val; }
};

#endif