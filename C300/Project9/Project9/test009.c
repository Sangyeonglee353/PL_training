#include<stdio.h>

main()
{
	int i; //정수형 변수 i를 정의합니다.
	int hap = 0; // 정수형 변수 hap를 정의하고, 0으로 초기화합니다.

	/*
	for 문은 다음처럼 실행됩니다.
	
	1. i에 1을 초기값으로 설정합니다.
	2. i가 10보다 작거나 같을 때까지만 순환문은 반복됩니다.
	3. 현재의 hap의 값과 i값을 더하여 hap에 대입합니다.
	4. i는 1씩 증가합니다.
	*/

	for (i = 1; i <= 10; i++)
	{
		hap = hap + i; //hap과 i를 더하여 hap에 대입합니다.
	}

	/* "1부터 10까지의 합:55"가 화면에 표시됩니다.*/
	printf("1부터 10까지의 합:%d",hap);
}