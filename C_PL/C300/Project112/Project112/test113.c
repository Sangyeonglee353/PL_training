// 2차원 배열 사용하기

#include <stdio.h>

void main(void)
{
	int i;
	int jumsu[100][3];
	int tota[3] = { 0, };

	for (i = 0; i < 100; i++)
	{
		jumsu[i][0] = 92; // 국어 점수
		jumsu[i][1] = 90; // 영어 점수
		jumsu[i][2] = 95; // 수학 점수
	}
	for (i = 0; i < 100; i++)
	{
		tota[0] += jumsu[i][0]; // 국어 총점
		tota[1] += jumsu[i][1]; // 영어 총점
		tota[2] += jumsu[i][2]; // 수학 총점
	}

	printf("국어 점수의 총점: %d \n", tota[0]);
	printf("영어 점수의 총점: %d \n", tota[1]);
	printf("수학 점수의 총점: %d \n", tota[2]);
}