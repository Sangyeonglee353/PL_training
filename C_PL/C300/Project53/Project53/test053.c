#include <stdio.h>

void main(void)
{
	int count; // 3회를 카운트하기 위한 변수
	int tmp; // 정수값을 읽을 임시 변수
	int total = 0; // 읽은 정수값을 합산하기 위한 변수

	for (count = 1; count <= 3; count++)
	{
		printf("%d 번째 정수값을 입력한 후 Enter 키를 누르세요. \n", count);

		scanf_s("%d", &tmp);

		total += tmp;

		printf("입력 값 = %d, 총합 = %d \n", tmp, total);
	}
	
	printf("읽은 정수의 총합은 %d입니다. \n", total);
}