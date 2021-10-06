// [예제 2]: 구조체 변수 대입과 비교
#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1 = { 10, 20 };
	struct point p2 = { 30, 40 };

	p2 = p1; // 대입가능

	printf("p2.x = %d, p2.y= %d\n", p2.x, p2.y); // p2 멤버확인
	
	//if (p1 == p2) // 비교 -> 컴파일 오류!!
	//	printf("p1와 p2이 같습니다.");

	if ((p1.x == p2.x) && (p1.y == p2.y)) // 올바른 비교
		printf("p1와 p2이 같습니다. \n");
}