// Constructor1.cpp

#include <iostream>
using namespace std;

const int SIZE = 20;

class myclass {
	int i, j;
public:
	myclass() // 생성자 함수
	{
		cout << "생성자 함수 호출" << endl;
		i = 10, j = 20;
	}
	void ShowData()
	{
		cout << "i = " << i << " j = " << j << endl;
	}
};

int main()
{
	myclass a; // 객체 생성
	a.ShowData();

	return 0;
}