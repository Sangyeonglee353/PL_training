// [예제 4] 내장 매크로
#include <stdio.h>

int main(void)
{
	printf("컴파일 날짜 = %s \n", __DATE__);
	printf("컴파일 시간 = %s \n", __TIME__);
	printf("오류 발생 파일이름 = %s 라인번호 = %d \n", __FILE__, __LINE__);
	
	return 0;
}