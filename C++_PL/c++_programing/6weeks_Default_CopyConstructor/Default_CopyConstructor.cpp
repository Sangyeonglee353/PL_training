// Default_CopyConstructor
#include <iostream>
using namespace std;

class myclass {
	int a, b;
public:
	myclass(int x, int y) {
		cout << "myclass(int x) ������ ȣ��" << endl;
		a = x;
		b = y;
	}
	// �⺻(����Ʈ) ���� ������ <�⺻���� ��������>
	myclass(const myclass& ob) {
		a = ob.a;
		b = ob.b;
	}
	void ShowData() {
		cout << "a: " << a << " b: " << b << endl;
	}
};

int main()
{
	myclass ob1(10, 20);
	myclass ob2(ob1); // myclass ob2 = ob1;

	ob1.ShowData();
	ob2.ShowData();

	return 0;
}