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
	// 변경된 부분, 가상 메서드(함수)
	// 프로그램에 독립된 두 개의 정의가 있다는 것을 알려준다.
	// 따라서, 두 개의 정의중 파생되는 클래스에 해당되는 것을 출력한다.
	virtual void show();
	int getHours() { return hours; };
	int getMins() { return mins; };
	~Time();
	friend Time operator* (int n, Time& t) {
		return t * n;
	}
	friend ostream& operator<<(ostream&, Time&);

private:
	int hours;
	int mins;
};


class NewTime : public Time {

public:
	NewTime();
	NewTime(int, int, int);
	void show();
private:
	int day;
};
#endif