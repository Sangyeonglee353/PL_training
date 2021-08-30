#ifndef TIMEH
#define TIMEH

#include <iostream>

using namespace std;

class Time
{
public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	//Time sum(Time&);
	Time operator+(Time&);
	Time operator*(int);
	void show();
	~Time();
	friend Time operator* (int n, Time& t) {
		return t * n;
	}
	friend ostream& operator<<(ostream&, Time&);

private:
	int hours;
	int mins;
};

// 변경된 부분
class NewTime : public Time {
	/*
	1. 파생 클래스형의 객체 안에는 기초 클래스형의 데이터 멤버들이 저장된다.
	2. 파생 클래스형의 객체는 기초 클래스형의 매서드들을 사용할 수 있다.
	3. 파생 클래스는 자기 자신의 생성자를 필요로 한다.
	4. 파생 클래스는 부가적인 데이터 멤버들과 멤버 함수들을 임의로 추가할 수 있다.
	*/
public:
	NewTime();
	NewTime(int, int, int);
	void print();
private:
	int day;
};
#endif