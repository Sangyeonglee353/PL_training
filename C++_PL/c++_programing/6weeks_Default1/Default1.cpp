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
	myclass a1(10, 20); // 10과 20을 인자로 받는
						// 생성자 함수 호출
	a1.ShowData();

	myclass a2; // void 생성자 호ㅜㄹ
	a2.ShowData();
	return 0;
}