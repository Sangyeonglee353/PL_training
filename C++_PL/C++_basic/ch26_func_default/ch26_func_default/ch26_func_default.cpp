#include <iostream>

using namespace std;

const int SIZE = 8;

// default 매개변수
/*
[특징]
1. 해당 매개변수가 argument로 주어지지 않을 경우 지정된 매개변수로 계산한다.
2. default 매개변수는 우측부터 좌측의 순서대로 지정할 수 있다.
*/

int sumArr(int* arr, int n = 1);

int main() {
	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	int sum = sumArr(arr);

	cout << "함수의 총합은 " << sum << "입니다." << endl;
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