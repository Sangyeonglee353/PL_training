// myclass.cpp
#include <iostream>
using namespace std;

class myclass {
	int a;
public:
	myclass(); // ������ �Լ�
	void show();
};

myclass::myclass()
{
	cout << "This is a constructor function \n";
	a = 10;
}

void myclass::show()
{
	cout << "a: " << a;
}

int main()
{
	myclass ob;
	ob.show();
	return 0;
}