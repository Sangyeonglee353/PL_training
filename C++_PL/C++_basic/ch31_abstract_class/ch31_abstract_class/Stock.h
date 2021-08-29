#ifndef STOCK
#define STOCK

#include <iostream>

using namespace std;

class Stock
{
	/*
	public�� private�� class���� ������ �����Ѵ�.
	private�� ���ǵ� �������� �����ϱ� ���ؼ��� public�� �Լ��� ���ľ߸� �Ѵ�.
	�����Ϳ� ������ �Ұ��� -> ������ ����(�߻�ȭ�� �Ѱ��� ����)
	[public]
	1. ���� ���, Ŭ����
	2. �ܺο����� ���� ����
	[private]
	1. ����� ���
	2. Ŭ���� �������� ���� ����
	3. �������� Data�� private�� �����Ͽ� �����͸� ���н�Ų��.
	*/
public:
	// void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	// ����� �κ�
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