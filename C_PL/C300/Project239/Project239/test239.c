// 파일을 다른 디렉터리로 이동하기(rename)

#include<stdio.h>

void main(void)
{
	char* filename = "D:\\mysources\\file_2.txt";
	char* movefile = "D:\\file_2.txt";

	if (rename(filename, movefile) != 0)
	{
		perror("파일 이동 에러");
	}
	else
	{
		puts("파일이 이동되었습니다.");
	}
}