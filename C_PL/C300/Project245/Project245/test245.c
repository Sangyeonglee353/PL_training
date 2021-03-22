// 출생일로부터 오늘까지의 경과일 수 구하기(mktime)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

#define DAYSEC (24*60*60) // 반드시 괄호로 묶어야 합니다.

void main(void)
{
	time_t n1, n2;
	struct tm t1, t2;
	double elapsed;

	t1.tm_year = 1990; // 년(2003년)
	t1.tm_mon = 10 - 1; // 월,(실제월-1)의 값 (10월)
	t1.tm_mday = 12; // 일(15일)
	t1.tm_hour = 0; // 시
	t1.tm_min = 0; // 분
	t1.tm_sec = 0; // 초

	n1 = time(NULL); 
	t2 = *localtime(&n1);

	n1 = mktime(&t1);
	n2 = mktime(&t2);

	n2 = n2 - n1;
	elapsed = (double)(n2 / DAYSEC);

	printf("김서진은 태어난 지 %.f일째 입니다. \n", elapsed);
}