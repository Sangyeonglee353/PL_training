// Constructor2.cpp
#include <iostream>
using namespace std;

const int SIZE = 20;

class myclass
{
	int i, j;
public:
	myclass(int a, int b) // 생성자 함수
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
	myclass a(100, 200); // 객체 생성과 함께 초기화
	a.ShowData();

	return 0;
}