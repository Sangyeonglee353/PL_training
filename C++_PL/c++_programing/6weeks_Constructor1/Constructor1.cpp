// Constructor1.cpp

#include <iostream>
using namespace std;

const int SIZE = 20;

class myclass {
	int i, j;
public:
	myclass() // ������ �Լ�
	{
		cout << "������ �Լ� ȣ��" << endl;
		i = 10, j = 20;
	}
	void ShowData()
	{
		cout << "i = " << i << " j = " << j << endl;
	}
};

int main()
{
	myclass a; // ��ü ����
	a.ShowData();

	return 0;
}