// Default1.cpp
#include <iostream>
using namespace std;

class myclass
{
	int i, j;
public:
	myclass(int a, int b)
	{
		i = a, j = b;
	}
	void ShowData() {
		cout << i << ' ' << j << endl;
	}
};

int main()
{
	myclass a1(10, 20); // 10�� 20�� ���ڷ� �޴�
						// ������ �Լ� ȣ��
	a1.ShowData();

	myclass a2; // void ������ ȣ�̤�
	a2.ShowData();
	return 0;
}