// Default2.cpp
#include <iostream>
using namespace std;

class myclass
{
	int i, j;
public:
	myclass(int a = 0, int b = 0)
	{
		i = a, j = b;
	}
	void ShowData() {
		cout << i << ' ' << j << endl;
	}
};

int main()
{
	myclass a1(10, 20); // 10�� 20�� ���ڷ� �޴� ������ �Լ� ȣ��
	a1.ShowData();

	myclass a2; // myclass(0, 0) ������ �Լ� ȣ��
	a2.ShowData();

	myclass a3(10); // myclass(10, 0) ������ �Լ� ȣ��
	a3.ShowData();
	return 0;

}