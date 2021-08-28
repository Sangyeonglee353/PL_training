#include <iostream>

using namespace std;

const int SIZE = 8;

// default �Ű�����
/*
[Ư¡]
1. �ش� �Ű������� argument�� �־����� ���� ��� ������ �Ű������� ����Ѵ�.
2. default �Ű������� �������� ������ ������� ������ �� �ִ�.
*/

int sumArr(int* arr, int n = 1);

int main() {
	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	int sum = sumArr(arr);

	cout << "�Լ��� ������ " << sum << "�Դϴ�." << endl;
	return 0;
}

int sumArr(int* arr, int n)
{
	int total = 0;

	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}