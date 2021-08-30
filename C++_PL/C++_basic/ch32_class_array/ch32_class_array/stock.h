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
	// ����� �κ�
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
	// �ζ��� �Լ�
	void set_total() { total_val = shares * share_val; }
};

#endif