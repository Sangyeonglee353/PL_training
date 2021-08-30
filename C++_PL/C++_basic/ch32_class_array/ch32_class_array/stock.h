#ifndef STOCK
#define STOCK

#include <iostream>

using namespace std;

class Stock
{
public:
	// void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	// 변경된 부분
	//Stock topval(Stock&);
	Stock& topval(Stock&);
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