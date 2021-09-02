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
	// ����� �κ�, ���� �޼���(�Լ�)
	// ���α׷��� ������ �� ���� ���ǰ� �ִٴ� ���� �˷��ش�.
	// ����, �� ���� ������ �Ļ��Ǵ� Ŭ������ �ش�Ǵ� ���� ����Ѵ�.
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