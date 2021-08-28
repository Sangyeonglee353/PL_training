#include <iostream>

using namespace std;

const int SIZE = 8;

// 함수의 매개변수에 배열 사용하기
//int sumArr(int [], int);
//
//int main() {
//	
//	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
//	cout << "size of arr " << sizeof arr << endl;
//	// arr = &arr[0]
//	int sum = sumArr(arr, SIZE);
//
//	cout <<  "함수의 총 합은 " << sum << "입니다.";
//	return 0;
//}
//
//int sumArr(int arr[], int n)
//{
//	cout << "size of arr " << sizeof arr << endl;
//	int total = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		total += arr[i];
//	}
//
//	return total;
//}
//

// 함수의 매개변수에 포인터 사용하기
//int sumArr(int*, int);
//
//int main() {
//
//	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
//	cout << "size of arr " << sizeof arr << endl;
//	//arr = &arr[0]
//	int sum = sumArr(arr, SIZE);
//
//	cout << "함수의 총 합은 " << sum << "입니다.";
//	return 0;
//}
//
//int sumArr(int* arr, int n)
//{
//	cout << "size of arr " << sizeof arr << endl;
//	int total = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		total += arr[i];
//	}
//
//	return total;
//}

// 매개변수의 시작과 끝값으로 표현하기
int sumArr(int*, int*);

int main() {

	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	
	//arr = &arr[0]
	int sum = sumArr(arr, arr+SIZE);

	cout << "함수의 총 합은 " << sum << "입니다.";
	return 0;
}

int sumArr(int* begin, int* end)
{
	int total = 0;
	int* pt;

	for (pt = begin; pt != end; pt++)
	{
		total += *pt;
	}

	return total;
}