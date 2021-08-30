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

// ����� �κ�
class NewTime : public Time {
	/*
	1. �Ļ� Ŭ�������� ��ü �ȿ��� ���� Ŭ�������� ������ ������� ����ȴ�.
	2. �Ļ� Ŭ�������� ��ü�� ���� Ŭ�������� �ż������ ����� �� �ִ�.
	3. �Ļ� Ŭ������ �ڱ� �ڽ��� �����ڸ� �ʿ�� �Ѵ�.
	4. �Ļ� Ŭ������ �ΰ����� ������ ������ ��� �Լ����� ���Ƿ� �߰��� �� �ִ�.
	*/
public:
	NewTime();
	NewTime(int, int, int);
	void print();
private:
	int day;
};
#endif