// Constructor2.cpp
#include <iostream>
using namespace std;

const int SIZE = 20;

class myclass
{
	int i, j;
public:
	myclass(int a, int b) // ������ �Լ�
	{
		i = a;
		j = b;
	}
	void ShowData()
	{
		cout << "i = " << i << " j = " << j << endl;
	}
};

int main()
{
	myclass a(100, 200); // ��ü ������ �Բ� �ʱ�ȭ
	a.ShowData();

	return 0;
}