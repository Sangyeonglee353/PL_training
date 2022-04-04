// Destructor.cpp
#include <iostream>
using namespace std;

class myclass {
	int a;
public:
	myclass(); // ������ �Լ�
	~myclass(); // �Ҹ��� �Լ�
	void show();
};

myclass::myclass()
{
	cout << "This is a constructor function. \n";
}

myclass::~myclass()
{
	cout << "This is a destructor function. \n";
}

void myclass::show()
{
	cout << "a: " << a;
}

int main()
{
	myclass a1; // a1 ��ü ���� �� ������ �Լ� ȣ��
	myclass a2; // a2 ��ü ���� �� ������ �Լ� ȣ��

	return 0; // ���ϰ� ���ÿ� ��ü a1, a2 �Ҹ� �� �Ҹ��� �Լ� ȣ��
}