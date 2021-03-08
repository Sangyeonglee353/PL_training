// 디렉터리 삭제하기(_ rmdir)

#include<stdio.h>
#include<direct.h>

void main(void)
{
	char* pathname = "d:\\mysources\\test";

	if (_rmdir(pathname) == -1)
	{
		perror("디렉터리 삭제 에러");
	}
	else
	{
		puts("디렉터리를 성공적으로 삭제하였습니다.");
	}
}