// Copycostructor4.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

class array {
	int* p;
	int size;
public:
	array(int sz) // ������ ������ �Լ�
	{
		p = new int[sz];
		if (!p) exit(1);
		size = sz;
		cout << "Using 'normal' constructor\n";
	}
	~array() { delete[] p; }

	// ���� ������
	array(const array &a);
	void put(int i, int j) {
		if (i >= 0 && i < size) p[i] = j;
	}
	int get(int i) {
		return p[i];
	}
};

array::array(const array& a)
{
	int i;
	size = a.size;
	p = new int[a.size];// ���纻�� ���� �޸𸮸� �Ҵ��Ѵ�.
	if (!p) exit(1);
	for (i = 0; i < a.size; i++) p[i] = a.p[i]; // ������ �����Ѵ�.
	cout << "Using copy constrcutor\n";
}

int main()
{
	array num(10); // ������ �����ڸ� ȣ���Ѵ�.
	int i;

	// ������ �迭�� �����Ѵ�.
	for (i = 0; i < 10; i++) num.put(i, i);

	// num�� ����Ѵ�.
	for (i = 9; i >= 0; i--) cout << num.get(i) << endl;

	// �� �ٸ� �迭�� �����ϰ� num���� �ʱ�ȭ�Ѵ�.
	array x = num; // �� ������ ���� ������ �Լ��� ��ȣ���Ѵ�.
	
	// x�� ����Ѵ�.
	for (i = 0; i < 10; i++) cout << x.get(i) << endl;

	return 0;
}